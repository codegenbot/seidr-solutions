#include <string>
#include <iostream>

std::string make_palindrome(std::string input) {
    std::string output = input;
    for(int i=0; i<input.length()/2; i++) {
        int j = input.length() - i - 1;
        char temp = output[j];
        output[j] = output[i];
        output[i] = temp;
    }
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