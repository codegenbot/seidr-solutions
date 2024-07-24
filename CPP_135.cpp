#include <vector>
#include <iostream>

int can_arrange(std::vector<int> arr) {
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] <= arr[i-1]) {
            return i - 1;
        }
    }
    return -1;
}

int main() {
    std::cout << can_arrange({3, 4, 2}) << std::endl;
    std::cout << can_arrange({5, 6, 7}) << std::endl;
    std::cout << can_arrange({10, 9, 8, 7, 6, 5, 4, 3, 2, 1}) << std::endl;
    return 0;
}