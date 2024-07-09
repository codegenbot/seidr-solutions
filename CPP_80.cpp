#include <iostream>
#include <string>

bool is_happy(std::string s) {
    std::string t = s;
    while (t != "1") {
        int sum = 0;
        for (char c : t) {
            sum += (c - '0') * (c - '0');
        }
        t = std::to_string(sum);
    }
    return true;
}

int main() {
    std::string num;
    std::cout << "Enter a number: ";
    std::cin >> num;  
    if (is_happy(num)) {
        std::cout << num << " is a happy number.\n";
    } else {
        std::cout << num << " is not a happy number.\n";
    }
    return 0;
}