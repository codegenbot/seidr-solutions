```cpp
#include <string>
#include <iostream>

std::string make_palindrome(std::string input) {
    std::string output = input;
    for(int i = input.length() -1; i >=0 ; --i)
        output += input[i];
    return output;
}

int main() {
    std::string input, output;
    std::cout << "Enter a string: ";
    std::cin >> input;
    output = make_palindrome(input);
    std::cout << "Palindrome of the given string is: " << output << std::endl;
    return 0;
}