```cpp
#include <iostream>
#include <string>

int add_elements(std::vector<int> arr) {
    int sum = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (std::to_string(arr[i]).length() <= 2) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    std::vector<int> input;
    int k;
    std::cout << "Enter the number of elements: ";
    std::cin >> k;
    for (int i = 0; i < k; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        int num;
        std::cin >> num;
        input.push_back(num);
    }
    std::cout << "Sum of elements with length of string representation <= 2: " << add_elements(input) << std::endl;
    return 0;
}