#include <vector>
#include <algorithm>
#include <string>

std::string words_in_sentence(std::string sentence) {
    std::vector<int> lengths;
    std::string result = "";
    
    for (const auto& word : split(sentence, ' ')) {
        int len = word.size();
        bool isPrime = true;
        
        if (len > 1) {
            for (int i = 2; i * i <= len; i++) {
                if (len % i == 0) {
                    isPrime = false;
                    break;
                }
            }
            
            if (isPrime) {
                result += word + " ";
                lengths.push_back(len);
            }
        }
    }
    
    return result.substr(0, result.size() - 1);
}

std::vector<std::string> split(const std::string& str, char ch) {
    std::vector<std::string> tokens;
    size_t pos = 0;
    while ((pos = str.find(ch)) != std::string::npos) {
        tokens.push_back(str.substr(0, pos));
        str.erase(0, pos + 1);
    }
    tokens.push_back(str);
    return tokens;