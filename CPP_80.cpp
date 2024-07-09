#include <iostream>
#include <string>

bool is_happy(int n);

int main2() {
    std::cout << "Enter a happy number: ";
    std::string num_str;
    std::cin >> num_str;  
    int num = std::stoi(num_str);  
    if (is_happy(num)) {
        std::cout << num << " is a happy number.\n";
    } else {
        std::cout << num << " is not a happy number.\n";
    }
    return 0;
}

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