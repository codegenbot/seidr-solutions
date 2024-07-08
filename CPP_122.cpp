```cpp
#include <iostream>
#include <vector>

int add_elements(std::vector<int> arr, int k) {
    int sum = 0;
    for (int i = 0; i < k; i++) {
        if (std::to_string(arr[i]).size() <= 2) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    // Test the function
    assert(add_elements({1}, 1) == 1);
    std::cout << "Test passed." << std::endl;

    // Read input from user and call the function with that input
    int size, num;
    std::cin >> size >> num;
    std::vector<int> arr(size);
    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }
    int result = add_elements(arr, num);
    std::cout << "Result: " << result << std::endl;

    return 0;
}