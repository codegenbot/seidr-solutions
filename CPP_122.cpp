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
    std::vector<int> vec;
    int num, k;

    // Read input from user
    std::cout << "Enter the number of elements: ";
    std::cin >> k;
    for (int i = 0; i < k; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> num;
        vec.push_back(num);
    }

    // Call the function and print output
    int result = add_elements(vec, k);
    std::cout << "The sum of elements with lengths <= 2 is: " << result << std::endl;

    return 0;
}