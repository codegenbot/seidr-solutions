#include <iostream>
#include <string>
#include <cassert>

std::string input_text;
std::cout << "Enter a text to convert to MD5: ";
std::cin >> input_text;

// Implement the string_to_md5 function

int main() {
    std::string input_text;
    std::cout << "Enter a text to convert to MD5: ";
    std::cin >> input_text;

    // Call the string_to_md5 function

    std::cout << "MD5 hash: " << md5_result << std::endl;
    assert(string_to_md5("password") == "5f4dcc3b5aa765d61d8327deb882cf99");
    return 0;
}