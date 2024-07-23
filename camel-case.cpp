#include <sstream>
#include <cctype>

std::string camelCase(std::string str) {
    std::istringstream iss(str);
    std::string word;
    std::string result;

    while (iss >> word) {
        if (!result.empty()) {
            result += std::toupper(word[0]);
            for (int i = 1; i < word.length(); ++i) {
                result += tolower((char)word[i]);
        } else {
            result += tolower((char)word[0]);
            for (int i = 1; i < word.length(); ++i) {
                result += (char)word[i];
            }
        }
    }

    return result;
}