#include <iostream>
#include <vector>

int can_arrange(std::vector<int> arr) {
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] <= arr[i-1]) {
            return i - 1;
        }
    }
    return -1;
}

int main() {
    std::cout << can_arrange({}) << std::endl;
    // test your function with different inputs
    return 0;
}