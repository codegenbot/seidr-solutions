#include <iostream>
#include <string>
#include <vector>
#include <limits>

int add_elements(const std::vector<int>& arr);

int main() {
    int k = 0;
    while (!(std::cin >> k && k >= 1)) {
        std::cout << "Error: invalid input. Please enter a positive integer: ";
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), ' ');
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }

    int num;
    std::vector<int> numbers;
    for (int i = 0; i < k; i++) {
        while (!(std::cin >> num && std::abs(num) <= std::numeric_limits<int>::max() &&
                std::abs(num) >= std::numeric_limits<int>::min())) {
            std::cout << "Error: invalid input. Please enter an integer between "
                      << std::numeric_limits<int>::min() << " and "
                      << std::numeric_limits<int>::max()
                      << ": ";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), ' ');
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        numbers.push_back(num);
    }

    int sum = 0; 
    for (int i = 0; i < numbers.size(); i++) {
        if(i > 0) {
            sum += numbers[i];
        } else {
            sum = numbers[0];
        }
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