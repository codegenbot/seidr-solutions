```cpp
#include <vector>
#include <iostream>

int can_arrange(std::vector<int> arr) {
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] <= arr[i - 1]) {
            return i;
        }
    }
    return -1;
}

int main() {
    std::vector<int> vec = {2, 5, 3, 7};
    int result = can_arrange(vec);
    if(result == -1) {
        std::cout << "The array is already arranged." << std::endl;
    } else {
        std::cout << "The first number that cannot be placed is at index: " << result << std::endl;
    }
    return 0;
}