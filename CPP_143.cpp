#include <iostream>
#include <string>
#include <vector>

bool is_prime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

std::vector<std::string> split(const std::string& s, const std::string& delimiter) {
    std::vector<std::string> result;
    size_t pos = 0;
    while ((pos = s.find(delimiter)) != std::string::npos) {
        result.push_back(s.substr(0, pos));
        s.erase(0, pos + delimiter.length());
    }
    result.push_back(s);
    return result;
}

std::string words_in_sentence(std::string sentence){
    std::string result = "";
    for (const auto& word : split(sentence, " ")) {
        if(is_prime(word.length())){
            result += word + " ";
        }
    }
    return result;
}