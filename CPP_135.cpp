```cpp
#include <vector>
#include <iostream>

int can_arrange(std::vector<int> arr) {
    for (int i = 1; i < arr.size(); ++i) {
        if (arr[i] <= arr[i - 1]) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<int> vec(n);
    for (int i = 0; i < n; ++i) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> vec[i];
    }

    int result = can_arrange(vec);

    if (result == -1) {
        std::cout << "The array is already arranged." << std::endl;
    } else {
        std::cout << "First element that can be moved to the front: " << result << std::endl;
    }

    return 0;
}