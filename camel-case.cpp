#include <string>
#include <sstream>

std::string camelCase(std::string str) {
    std::stringstream ss(str);
    std::string word;
    std::string result = "";
    
    while (std::getline(ss, word, '-')) {
        if (!result.empty()) {
            result += std::string(1, (word[0] >= 'a' && word[0] <= 'z') ? ' ' : '\0');
        }
        
        for (char& c : word) {
            c = static_cast<char>(std::toupper(c));
        }
        
        if (!result.empty()) {
            result += " ";
        }
        
        result += word;
    }
    
    return result;
}