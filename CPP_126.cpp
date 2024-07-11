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
    std::vector<int> input = {1, 2, 3, 4, 5};
    std::cout << is_sorted(input) << std::endl;

    std::vector<int> input2 = {1, 3, 2, 4, 5};
    std::cout << is_sorted(input2) << std::endl;

    return 0;
}