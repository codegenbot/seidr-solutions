#include <iostream>
#include <vector>
#include <algorithm>

bool is_sorted(const std::vector<int>& lst) {
    for (int i = 0; i < lst.size() - 1; i++) {
        if (lst[i] >= lst[i + 1] || std::count(lst.begin(), lst.end(), lst[i]) > 1) {
            return false;
        }
    }
    return true;
}

int main() {
    std::vector<int> test1 = {1, 2, 3, 4, 5};
    std::vector<int> test2 = {2, 1, 3, 4, 5};

    std::cout << "Test 1 is sorted: " << (is_sorted(test1) ? "true" : "false") << std::endl;
    std::cout << "Test 2 is sorted: " << (is_sorted(test2) ? "true" : "false") << std::endl;

    return 0;
}