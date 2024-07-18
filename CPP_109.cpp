#include <iostream>
#include <vector>
#include <cassert>

bool move_one_ball(std::vector<int> arr) {
    int n = arr.size();
    for (int i = 1; i < n; ++i) {
        if (arr[i] < arr[i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::vector<int> arr;
    int num;
    while (std::cin >> num) {
        arr.push_back(num);
    }

    std::cout << std::boolalpha << move_one_ball(arr) << std::endl;

    return 0;
}