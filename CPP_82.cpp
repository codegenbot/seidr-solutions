#include <iostream>
#include <string>

bool prime_length(std::string str) {
    int length = str.length();
    if (length <= 1) {
        return false;
    }
    for (int i = 2; i * i <= length; ++i) {
        if (length % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    std::string str;

    // Read input from the user
    std::cout << "Enter a string: ";
    std::getline(std::cin, str);

    // Call the function and print the result
    std::cout << "Output: " << (prime_length(str) ? "true" : "false") << std::endl;

    return 0;
}