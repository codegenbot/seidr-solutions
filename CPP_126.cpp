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
    // Test the function
    std::vector<int> testList1 = {1, 2, 3, 4, 5};
    std::vector<int> testList2 = {1, 2, 3, 3, 4, 5};

    std::cout << is_sorted(testList1) << std::endl; // Output: 1 (true)
    std::cout << is_sorted(testList2) << std::endl; // Output: 0 (false)

    return 0;
}