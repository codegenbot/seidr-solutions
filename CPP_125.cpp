#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>

std::vector<std::string> split_words(const std::string &str, char delimiter) {
    std::vector<std::string> tokens;
    std::string token;
    std::istringstream tokenStream(str);
    while (std::getline(tokenStream, token, delimiter)) {
        tokens.push_back(token);
    }
    return tokens;
}

bool issame(const std::vector<std::string> &a, const std::vector<std::string> &b) {
    return std::equal(a.begin(), a.end(), b.begin(), b.end());
}

int main() {
    std::string input1, input2;
    
    std::getline(std::cin, input1);
    std::getline(std::cin, input2);
    
    std::vector<std::string> vec1 = split_words(input1, ' ');
    std::vector<std::string> vec2 = split_words(input2, ' ');
    
    bool result = issame(vec1, vec2);
    
    std::cout << (result ? "Vectors are the same" : "Vectors are different") << std::endl;
    
    return 0;
}