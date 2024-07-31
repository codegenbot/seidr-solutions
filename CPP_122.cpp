#include <iostream>
#include <string>
#include <vector>
#include <limits.h>

int add_elements(const std::vector<int>& arr);

int main() {
    int k = 0;
    std::cout << "Enter the number of elements: ";
    while (!(std::cin >> k && k >= 1)) {
        std::cout << "Error: invalid input. Please enter a positive integer: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    if(k > INT_MAX) {
        std::cout << "Error: k is too large." << std::endl;
        return -1;
    }

    int sum = 0; 
    std::vector<int> numbers;
    for (int i = 0; i < k; i++) {
        int num;
        while (!(std::cin >> num && num >= INT_MIN &&
                num <= INT_MAX)) {
            std::cout << "Error: invalid input. Please enter an integer between "
                      << INT_MIN << " and " << INT_MAX
                      << ": ";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        if(i > 0) {
            sum += num;
        } else {
            sum = num;
        }
        if(numbers.size() >= k) break;
        numbers.push_back(num);
    }
    std::cout << "Sum of elements with length of string representation <= 2: " << add_elements(numbers) << std::endl;

}

int add_elements(const std::vector<int>& arr) {
    int sum = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (std::to_string(arr[i]).length() <= 2) {
            sum += arr[i];
        }
    }
    return sum;
}