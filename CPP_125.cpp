#include <iostream>
#include <vector>
#include <string>
#include <cassert>

std::vector<std::string> split_words(std::string input) {
    // Implement your split logic here
    return {};
}

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    // Implement your comparison logic here
    return false;
}

int main() {
    std::string input1, input2;
    std::getline(std::cin, input1);
    std::getline(std::cin, input2);
    
    std::vector<std::string> a = split_words(input1);
    std::vector<std::string> b = split_words(input2);
    
    if (issame(a, b)) {
        std::cout << "Same" << std::endl;
    } else {
        std::cout << "Different" << std::endl;
    }
    
    return 0;
}