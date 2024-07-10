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
    while (std::cin >> std::string temp) {  
        if (temp.empty()) {
            std::cout << "Error: Input is empty. Please enter a valid string." << std::endl;
        } else {
            std::cout << "Flipped case: " << flip_case(temp) << std::endl;
        }
    }
}

int main(int argc, const char* argv[]) {
    driver();
}