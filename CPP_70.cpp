#include <algorithm>
#include <vector>
#include <iostream>

bool std::issame(std::vector<int> a, std::vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> strange_sort_vector(std::vector<int> lst) {
    std::vector<int> result;
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

int test_main() {
    int num;
    std::cout << "Enter an integer: ";
    std::cin >> num;
    std::vector<int> input = {num};
    std::vector<int> output = strange_sort_vector(input);
    std::cout << "Output: ";
    for (auto i : output) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
}