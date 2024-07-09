```cpp
#include <iostream>
#include <string>

bool is_happy(int n);

bool is_happy(int n) {
    if (n < 1) return false;
    while (n > 1) {
        std::string str = std::to_string(n);
        int sum = 0;
        for(char c : str) {
            sum += (c - '0')*(c - '0');
        }
        n = std::stoi(std::to_string(sum));
    }
    return n == 1;
}

int main() {
    int num;
    std::cout << "Enter a number: ";
    std::cin >> num;
    if (is_happy(num)) {
        std::cout << num << " is a happy number.\n";
    } else {
        std::cout << num << " is not a happy number.\n";
    }
    return 0;
}