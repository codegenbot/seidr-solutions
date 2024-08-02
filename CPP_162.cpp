// Add necessary includes and forward declaration
#include <iostream>
#include <string>
#include <cassert>

std::string input_text;

// Function signature for string_to_md5
std::string string_to_md5(const std::string& input);

int main() {
    std::string input_text;
    std::cout << "Enter a text to convert to MD5: ";
    std::cin >> input_text;

    // Call the string_to_md5 function
    std::string md5_result = string_to_md5(input_text);

    std::cout << "MD5 hash: " << md5_result << std::endl;
    
    // Test the function with an assertion
    assert(string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99");

    return 0;
}