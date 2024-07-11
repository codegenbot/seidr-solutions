#include <algorithm>
#include <iostream>
#include <vector>

bool is_sorted(const std::vector<int>& lst) {
    for (int i = 0; i < lst.size() - 1; i++) {
        if (lst[i] >= lst[i + 1] || std::count(lst.begin(), lst.end(), lst[i]) > 1) {
            return false;
        }
    }
    return true;
}

int main() {
    std::vector<int> list = {1, 2, 3, 4, 5}; // Example list

    if (is_sorted(list)) {
        std::cout << "List is sorted in ascending order with no repeated elements." << std::endl;
    } else {
        std::cout << "List is not sorted in ascending order or contains repeated elements." << std::endl;
    }

    return 0;
}