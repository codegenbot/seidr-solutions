```cpp
#include <string>
#include <vector>

std::string words_in_sentence(std::string sentence) {
    std::vector<int> primeLengths;
    for (int i = 2; i <= sentence.size(); i++) {
        bool isPrime = true;
        for (int j = 2; j * j <= i; j++)
            if (i % j == 0)
                isPrime = false;
        if (isPrime)
            primeLengths.push_back(i);
    }
    
    std::string result = "";
    std::vector<std::string> words = split(sentence, ' ');
    for (const auto& word : words) {
        if (find(primeLengths.begin(), primeLengths.end(), word.size()) != primeLengths.end())
            result += word + " ";
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