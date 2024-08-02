```cpp
#include <iostream>
#include <vector>

int can_arrange(std::vector<int> arr) {
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] <= arr[i - 1]) {
            return i - 1;
        }
    }
    return -1;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
    int result = can_arrange(arr);
    if (result != -1) {
        std::cout << "Array cannot be arranged in increasing order" << std::endl;
    } else {
        std::cout << "Array can be arranged in increasing order" << std::endl;
    }
    return 0;
}