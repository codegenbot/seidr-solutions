```cpp
#include <iostream>
#include <vector>
#include <string>

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
    std::string temp = str;
    size_t pos = 0;
    while ((pos = temp.find(c)) != std::string::npos) {
        tokens.push_back(temp.substr(0, pos));
        temp.erase(0, pos + 1);
    }
    tokens.push_back(temp);
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

int main() {
    std::cout << words_in_sentence("here is") << std::endl;
    return 0;
}