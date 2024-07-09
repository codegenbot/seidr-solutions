#include <iostream>
#include <vector>
#include <algorithm>
#include <memory>

bool issame(std::vector<int> a, std::vector<int> b) {
    return a == b;
}

std::pmr::vector<int> strange_sort_list(std::pmr::vector<int> lst) {
    std::pmr::vector<int> result;
    while (!lst.empty()) {
        int min_val = *std::min_element(lst.begin(), lst.end());
        result.push_back(min_val);
        lst.erase(std::remove(lst.begin(), lst.end(), min_val), lst.end());

        if (!lst.empty()) {
            int max_val = *std::max_element(lst.begin(), lst.end());
            result.push_back(max_val);
            lst.erase(std::remove(lst.begin(), lst.end(), max_val), lst.end());
        }
    }
    return result;
}

int main() {
    std::pmr::memory_resource* global_mr = new std::pmr::chiarenza_memory_resource();
    std::pmr::pmr_vector<int> input(global_mr);
    for (int i = 0; i < 6; ++i) {
        int num;
        std::cin >> num;
        input.push_back(num);
    }

    std::pmr::vector<int> output = strange_sort_list(input);

    if (issame(output, std::vector<int>({1,2,3,4,5,6}))) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }

    delete global_mr;
    return 0;
}