#include <iostream>
#include <string>
#include <vector>

int main() {
    int k = 0;
    std::cout << "Enter the number of elements: ";
    std::cin >> k;
    std::vector<int> input;
    for (int i = 0; i < k; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        int num;
        std::cin >> num;
        input.push_back(num);
    }
    std::cout << "Sum of elements with length of string representation <= 2: " << add_elements(input, 0) << std::endl;
    return 0;
}

int add_elements(const std::vector<int>& arr, int sum) {
    for (int i = 0; i < arr.size(); i++) {
        if (std::to_string(arr[i]).length() <= 2) {
            sum += arr[i];
        }
    }
    return sum;
}