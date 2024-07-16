#include <string>
#include <vector>
#include <algorithm>

std::string camelCase(const std::string& str) {
    std::vector<std::string> words = split(str, '-');
    
    if (words.empty()) {
        return "";
    }

    std::string result;
    for (int i = 0; i < words.size(); i++) {
        if (!words[i].empty()) { 
            if (i == 0) {
                result += std::toupper(words[i][0]);
            } else {
                if (!result.empty()) {
                    result += " ";
                }
                result += std::string(1, std::tolower(words[i][0])) + words[i].substr(1);
            }
        }
    }
    
    return result;
}