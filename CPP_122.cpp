#include <iostream>
#include <vector>

int add_elements(std::vector<int> arr, int k) {
    int sum = 0;
    for (int i = 0; i < k; i++) {
        if (to_string(arr[i]).size() <= 2) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    std::vector<int> input;
    int num, count;
    std::cout << "Enter the size of the array: ";
    std::cin >> count;
    for (int i = 0; i < count; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> num;
        input.push_back(num);
    }
    int sum = add_elements(input, count);
    std::cout << "The sum of elements is: " << sum << "\n";
    return 0;
}