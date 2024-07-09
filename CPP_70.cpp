```cpp
#include <iostream>
#include <vector>
#include <algorithm>
#include <memory_resource>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

std::pmr::vector<int> strange_sort_list(std::pmr::pmr_vector<int> lst) {
    std::pmr::vector<int> result;
    while (!lst.empty()) {
        int min_val = *std::min_element(lst.begin(), lst.end());
        result.push_back(min_val);
        auto newEnd = std::remove(lst.begin(), lst.end(), min_val);
        lst.erase(newEnd, lst.end());

        if (!lst.empty()) {
            int max_val = *std::max_element(lst.begin(), lst.end());
            result.push_back(max_val);
            newEnd = std::remove(lst.begin(), lst.end(), max_val);
            lst.erase(newEnd, lst.end());
        }
    }
    return result;
}

int main() {
    std::pmr::monotonic_buffer_resource buffer_resource;
    std::pmr::vector<int> input(buffer_resource);
    for (int i = 0; i < 6; ++i) {
        int num;
        std::cin >> num;
        input.emplace_back(num);
    }

    std::pmr::vector<int> output = strange_sort_list(input);

    if (issame(output, {1,2,3,4,5,6})) {
        std::cout << "True" << std::endl;
    } else {
        std::cout << "False" << std::endl;
    }

    return 0;
}