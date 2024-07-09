#include <iostream>
#include <string>

bool is_happy(int n);

int main() {
    std::string num_str;
    std::cout << "Enter a number: ";
    std::cin >> num_str;  
    int num = stoi(num_str);
    if (is_happy(num)) {
        std::cout << num << " is a happy number.\n";
    } else {
        std::cout << num << " is not a happy number.\n";
    }
}