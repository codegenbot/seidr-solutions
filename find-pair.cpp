```c
#include <iostream>

int main() {
    int nums[5] = {1, 2, 3, 4, 5};
    int target = 7;

    // Find two elements that sum to target
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (nums[i] + nums[j] == target) {
                std::cout << "[" << nums[i] << ", " << nums[j] << "]" << std::endl;
                return 0;
            }
        }
    }
    std::cout << "[-1, -1]" << std::endl;
    return 1;
}
```