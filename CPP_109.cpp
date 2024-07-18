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
    std::vector<int> input;
    int n;
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        int num;
        std::cin >> num;
        input.push_back(num);
    }
    std::cout << (move_one_ball(input) ? "true" : "false") << std::endl;
    return 0;
}