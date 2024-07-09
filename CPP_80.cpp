#include <iostream>
#include <string>

bool is_happy(int n);

bool is_happy(int n) {
    if (n < 1) return false;
    while (n > 1) {
        int sum = 0;
        while (n) {
            n %= 10;
            sum += n * n;
            n /= 10;
        }
        n = sum;
    }
    return n == 1;
}

int main() {
    std::string input;
    std::cout << "Enter a number: ";
    std::cin >> input;

    if (input.find_first_not_of("0123456789") != std::string::npos) {
        std::cerr << "Invalid input. Please enter an integer." << std::endl;
        return 1; 
    }

    int num = std::stoi(input);
    if (is_happy(num)) {
        std::cout << num << " is a happy number.\n";
    } else {
        std::cout << num << " is not a happy number.\n";
    }
    return 0;
}