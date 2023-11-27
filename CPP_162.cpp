#include <iostream>
#include <string>

std::string string_to_md5(const std::string& text) {
    if (text.empty()) {
        return "None";
    }

    // Compute MD5 hash
    // ...

    return "MD5 hash";  // Replace with the actual MD5 hash
}

int main() {
    std::string input;
    std::cout << "Enter the text: ";
    std::cin >> input;
    std::cout << "MD5 hash: " << string_to_md5(input) << std::endl;    
}