#include <iostream>
#include <vector>
#include <algorithm>

bool is_sorted(std::vector<int> lst) {
    std::sort(lst.begin(), lst.end());
    for (int i = 1; i < lst.size(); i++) {
        if (lst[i] == lst[i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::vector<int> lst = {1, 2, 3, 4, 5};
    std::cout << std::boolalpha << is_sorted(lst) << std::endl;
    return 0;
}