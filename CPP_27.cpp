```cpp
#include <iostream>
#include <string>

std::string flip_case(const std::string& str) {
    std::string result;
    for (char c : str) {
        if (c >= 'a' && c <= 'z') {
            result += c - ('a' - 'A');
        } else if (c >= 'A' && c <= 'Z') {
            result += c - ('A' - 'a');
        } else {
            result += c;
        }
    }
    return result;
}

int driver() {  
    std::string result;
    while (std::getline(std::cin, result)) {  
        if (result.empty()) {
            std::cout << "Error: Input is empty. Please enter a valid string." << std::endl;
        } else {
            std::cout << "Flipped case: " << flip_case(result) << std::endl;
        }
    }
}

int main(int argc, const char* argv[]) {
    driver();
}