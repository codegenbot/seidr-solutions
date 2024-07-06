#include <string>
#include <vector>

std::string words_in_sentence(std::string sentence) {
    std::string result = "";
    for (const auto& word : split(sentence, " ")) {
        if (is_prime(word.length())) {
            result += word + " ";
        }
    }
    return result;
}

std::vector<std::string> split(const std::string& str, const std::string& delim) {
    std::vector<std::string> tokens;
    size_t pos = 0;
    while ((pos = str.find(delim)) != std::string::npos) {
        tokens.push_back(str.substr(0, pos));
        str.erase(0, pos + delim.length());
    }
    tokens.push_back(str);
    return tokens;
}

bool is_prime(int n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}