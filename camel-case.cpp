#include <vector>
#include <iostream>
#include <string>

std::string camelCase(const std::string& s) {
    std::vector<std::string> words;
    for (const auto &token : s.split(" ")) {
        words.push_back(token);
    }

    std::string result = "";
    for (size_t i = 0; i < words.size(); ++i) {
        if (!result.empty()) {
            if (i != 0)
                result += charToUpper(words[i][0]);
            else
                result += words[i];
        } else {
            result = words[i];
        }
    }

    return result;
}

#include <cctype>
std::string& stringManipulator(std::string &s) {
    for (auto &c : s)
        c = std::toupper(c);
    return s;
}