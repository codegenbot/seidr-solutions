#include <iostream>
#include <string>

std::string input_text;
std::cout << "Enter a text to convert to MD5: ";
std::cin >> input_text;

std::string string_to_md5(const std::string& input) {
    // Implement the conversion to MD5 hash function
    // This part needs to be implemented by the developer
}

std::string md5_result = string_to_md5(input_text);
std::cout << "MD5 hash: " << md5_result << std::endl;