```cpp
#include <iostream>
#include <vector>

int can_arrange(std::vector<int> arr);

int main() {
    int test1 = can_arrange({1, 2, 3});
    std::cout << "Test 1: " << test1 << std::endl;

    int test2 = can_arrange({1, 4, 3});
    std::cout << "Test 2: " << test2 << std::endl;

    return 0;
}

int can_arrange(std::vector<int> arr) {
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] <= arr[i - 1]) {
            return i;
        }
    }
    return -1;
}