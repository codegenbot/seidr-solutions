#include <iostream>
#include <sstream>
#include <vector>
#include <cmath>
#include <string>

bool isPrime(int num) {
    if (num <= 1) return false;
    if (num == 2) return true;
    if (num % 2 == 0) return false;
    for (int i = 3; i <= std::sqrt(num); i += 2) {
        if (num % i == 0) return false;
    }
    return true;
}

std::string words_in_sentence(std::string sentence) {
    std::istringstream iss(sentence);
    std::string word;
    std::vector<std::string> result;
    
    while (iss >> word) {
        if (isPrime(word.length())) {
            result.push_back(word);
        }
    }
    
    std::string output;
    for (size_t i = 0; i < result.size(); ++i) {
        if (i > 0) output += " ";
        output += result[i];
    }
    
    return output;
}

int main() {
    std::string input;
    std::getline(std::cin, input);
    std::cout << words_in_sentence(input) << std::endl;
    return 0;
}