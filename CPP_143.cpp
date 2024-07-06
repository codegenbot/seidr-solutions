#include <iostream>
#include <sstream>
#include <string>
#include <vector>

std::string words_in_sentence(std::string sentence){
    std::string result = "";
    for (const auto& word : split(sentence, ' ')) {
        if (is_prime(word.length())) {
            result += word + " ";
        }
    }
    return result.substr(0, result.size() - 1);
}

std::vector<std::string> split(const std::string& str, char c) {
    std::vector<std::string> tokens;
    size_t pos = 0;
    while ((pos = str.find(c)) != std::string::npos) {
        tokens.push_back(str.substr(0, pos));
        str.erase(0, pos + 1);
    }
    tokens.push_back(str);
    return tokens;
}

bool is_prime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}