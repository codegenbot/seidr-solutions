#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool is_sorted(const std::vector<int>& arr) {
    return std::is_sorted(arr.begin(), arr.end());
}

void rotate(std::vector<int>::reverse_iterator first, std::vector<int>::reverse_iterator last, std::vector<int>::reverse_iterator rend) {
    std::rotate(first, first + 1, last);
}

bool move_one_ball(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n; ++i) {
        if (is_sorted(arr)) {
            return true;
        }
        rotate(arr.rbegin(), arr.rbegin() + 1, arr.rend());
    }
    return false;
}

int main() {
    std::vector<int> test1 = {1, 2, 3, 4, 5};
    assert(move_one_ball(test1) == true);

    std::vector<int> test2 = {5, 4, 3, 2, 1};
    assert(move_one_ball(test2) == false);

    std::vector<int> test3 = {3, 2, 1, 5, 4};
    assert(move_one_ball(test3) == true);

    std::cout << "All tests passed successfully." << std::endl;

    return 0;
}