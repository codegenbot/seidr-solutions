#include <algorithm>
#include <iostream>
#include <string>

std::string anti_shuffle(const std::string& str) {
    // Implement your logic here to return the anti-shuffled sentence
    return str;
}

int main() {
    std::string str;
    std::cout << "Enter a sentence: ";
    std::cin >> str;
    std::cout << "Anti-shuffled sentence: " << anti_shuffle(str) << std::endl;
    return 0; 
}