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
    std::vector<int> numbers = {1, 2, 3, 4, 5};
    std::cout << is_sorted(numbers) << std::endl;

    std::vector<int> numbers2 = {1, 2, 3, 3, 4, 5};
    std::cout << is_sorted(numbers2) << std::endl;

    return 0;
}