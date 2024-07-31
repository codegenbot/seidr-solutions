```
#include <iostream>
#include <string>

int main() {
    assert(main({1}, 1) == 1);
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
    std::cout << "Sum of elements with length of string representation <= 2: " << main(input, k) << std::endl;
    return 0;
}

int add_elements(std::vector<int> arr, int k) {
    int sum = 0;
    for (int i = 0; i < k; i++) {
        if (std::to_string(arr[i]).length() <= 2) {
            sum += arr[i];
        }
    }
    return sum;
}