```cpp
#include <string>
#include <vector>

std::string words_in_sentence(std::string sentence) {
    std::vector<std::string> words = split(sentence, ' ');
    std::string result;
    
    for (auto word : words) {
        if (is_prime(word.length())) {
            result += word + " ";
        }
    }
    
    return result.substr(0, result.size() - 1);
}

bool is_prime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

std::vector<std::string> split(const std::string& str, char delim) {
    std::vector<std::string> tokens;
    size_t prev = 0, pos = 0;
    do {
        pos = str.find(delim, prev);
        if (pos == std::string::npos) pos = str.length();
        std::string token = str.substr(prev, pos - prev);
        tokens.push_back(token);
        prev = pos + 1;
    } while (pos != std::string::npos);
    return tokens;
}