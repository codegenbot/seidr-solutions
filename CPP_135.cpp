```cpp
#include <iostream>
#include <vector>

int can_arrange(std::vector<int> arr) {
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] <= arr[i - 1]) {
            return i;
        }
    }
    return -1;
}

int main() {
    std::vector<int> arr = {4, 3, 2, 7};
    int result = can_arrange(arr);
    if(result == -1)
        std::cout << "Array is already arranged" << std::endl;
    else
        std::cout << "The first number that doesn't fit into the sequence: " << result << std::endl;
    return 0;
}