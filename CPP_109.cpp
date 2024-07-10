#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool is_sorted(const std::vector<int>& arr) {
    return std::is_sorted(arr.begin(), arr.end());
}

void rotate(std::vector<int>& arr) {
    std::rotate(arr.rbegin(), arr.rbegin() + 1, arr.rend());
}

bool move_one_ball(std::vector<int>& arr);

int main() {
    std::vector<int> test1 = {1, 2, 3, 4, 5};
    assert(move_one_ball(test1) == true);

    std::vector<int> test2 = {5, 4, 3, 2, 1};
    assert(move_one_ball(test2) == true);

    std::vector<int> test3 = {2, 1, 4, 3, 5};
    assert(move_one_ball(test3) == false);

    std::cout << "All tests passed successfully!" << std::endl;
    return 0;
}