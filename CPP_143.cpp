#include <vector>
#include <algorithm>
#include <string>
#include <sstream>

std::vector<std::string> split(const std::string& str, char ch) {
    std::vector<std::string> tokens;
    std::string token;
    for (char c : str) {
        if (c == ch) {
            tokens.push_back(token);
            token = "";
        } else {
            token += c;
        }
    }
    tokens.push_back(token);
    return tokens;
}

std::string words_in_sentence(std::string sentence) {
    std::vector<int> wordLengths;
    std::string result = "";
    
    for (const auto& word : split(sentence, ' ')) {
        int length = word.length();
        bool isPrime = true;
        
        if (length > 1) {
            for (int i = 2; i * i <= length; ++i) {
                if (length % i == 0) {
                    isPrime = false;
                    break;
                }
            }
            
            if (isPrime) {
                wordLengths.push_back(length);
            }
        }
    }
    
    std::string primeWordLengths = "";
    
    for (int length : wordLengths) {
        primeWordLengths += std::to_string(length) + " ";
    }
    
    return primeWordLengths.empty() ? "" : "Prime words: " + primeWordLengths;
}