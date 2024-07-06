#include <iostream>
#include <vector>

bool move_one_ball(std::vector<int> arr) {
    if (arr.empty()) return true;

    int max_idx = 0;
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] >= arr[max_idx]) {
            max_idx = i;
        }
    }

    return max_idx == arr.size() - 1 || arr[0] <= arr[1];
}

int main() {
    std::vector<int> arr;
    int n;

    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    arr.resize(n);

    std::cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    if (move_one_ball(arr)) {
        std::cout << "Move one ball to the front.\n";
    } else {
        std::cout << "Do not move the ball.\n";
    }

    return 0;
}