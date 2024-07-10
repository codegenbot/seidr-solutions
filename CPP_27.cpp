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

int main(int argc, const char* argv[]) {
    while(true) {
        std::string input;
        std::cout << "Enter a string (type 'stop' to exit): ";
        std::cin >> input;
        if(input == "stop") break;
        std::cout << "Flipped case: " << flip_case(input) << std::endl;
    }
}