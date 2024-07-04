#include <iostream>
#include <vector>

bool move_one_ball(std::vector<int> arr) {
    int n = arr.size();
    if (n == 0) return true;

    int count = 0;
    for (int i = 0; i < n; ++i) {
        if (arr[i] > arr[(i + 1) % n]) {
            count++;
        }
        if (count > 1) {
            return false;
        }
    }
    return true;
}

int main() {
    std::cout << std::boolalpha;

    std::cout << (move_one_ball({}) == true) << std::endl;
    std::cout << (move_one_ball({3, 4, 5, 1, 2}) == true) << std::endl;
    std::cout << (move_one_ball({2, 3, 4, 5, 1}) == true) << std::endl;
    std::cout << (move_one_ball({1, 2, 3, 4, 5}) == true) << std::endl;
    std::cout << (move_one_ball({3, 1, 2}) == false) << std::endl;

    return 0;
}