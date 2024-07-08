#include <string>
#include <sstream>
#include <vector>

std::string camelCase(const std::string& s) {
    std::stringstream ss(s);
    std::string word;
    std::vector<std::string> words;
    std::string result = "";

    while (ss >> word) {
        if (!words.empty()) {
            result += toupper(word[0]);
            for (char c : word.substr(1)) {
                result += tolower(c);
            }
        } else {
            for (char c : word) {
                result += tolower(c);
            }
        }
        words.push_back(word);
    }

    return result;
}