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
    std::vector<int> arr = {1, 2, 3};
    int result = can_arrange(arr);
    if (result == -1) {
        std::cout << "The array is already arranged.\n";
    } else {
        std::cout << "The array needs to be rearranged from index " << result << ".\n";
    }
    return 0;
}