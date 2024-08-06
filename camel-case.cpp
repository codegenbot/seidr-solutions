Here is the solution:

#include <iostream>
#include <string>

std::string camelCase(const std::string& s) {
    std::vector<std::string> words;
    size_t pos = 0;

    while ((pos = s.find(' ')) != std::string::npos) {
        words.push_back(s.substr(0, pos));
        s.erase(0, pos + 1);
    }

    if (!s.empty()) {
        words.push_back(s);
    }

    std::string result;
    for (size_t i = 0; i < words.size(); ++i) {
        size_t dashPos = words[i].find('-');
        while (dashPos != std::string::npos) {
            if (result.size()) {
                result += std::toupper(words[i].substr(0, dashPos));
                words[i] = words[i].substr(dashPos + 1);
            }
            dashPos = words[i].find('-');
        }

        if (!words[i].empty() && i < words.size() - 1) {
            result += std::string(words[i]);
        } else {
            if (result.empty()) {
                result = words[i];
            } else {
                size_t start = 0;
                for (size_t j = 0; j < words[i].size(); ++j) {
                    if (!std::isupper(words[i][j])) {
                        break;
                    }
                    start++;
                }

                if (start > 0) {
                    result += std::string(1, std::tolower(words[i][0]));
                    for (size_t j = 1; j < words[i].size(); ++j) {
                        result += std::string(1, words[i][j]);
                    }
                } else {
                    result += words[i];
                }
            }
        }
    }

    return result;
}

int main() {
    std::cout << camelCase("nospaceordash") << std::endl;
    std::cout << camelCase("two-words") << std::endl;
    std::cout << camelCase("two words") << std::endl;
    std::cout << camelCase("all separate words") << std::endl;
    return 0;
}