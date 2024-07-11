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
    std::vector<int> test2 = {1, 2, 3, 3, 4};
    
    std::cout << is_sorted(test1) << std::endl; // Output: 1 (true)
    std::cout << is_sorted(test2) << std::endl; // Output: 0 (false)
    
    return 0;
}