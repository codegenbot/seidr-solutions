#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& input) {
    std::vector<std::string> words;
    if (!input.empty()) {
        size_t pos = 0;
        do {
            size_t nextPos = input.find(' ', pos);
            if (nextPos == std::string::npos) {
                nextPos = input.length();
            }
            words.push_back(input.substr(pos, nextPos - pos));
            pos = nextPos + 1;
        } while (pos < input.length());
    }

    std::string output;
    for (size_t i = 0; i < words.size(); ++i) {
        if (!words[i].empty()) {
            size_t dashPos = words[i].find('-');
            if (dashPos != std::string::npos) {
                output += words[i].substr(0, dashPos).substr(0, 1).toupper();
                output += words[i].substr(dashPos + 1);
                for (++i; i < words.size() && words[i][0] == '-'; ++i) {
                    output += words[i].substr(1);
                }
                break;
            } else {
                if (i > 0) {
                    output.push_back(' ');
                }
                output += words[i];
            }
        }
    }

    return output;
}

int main() {
    std::cout << kebabToCamel("nospaceordash") << "\n";
    std::cout << kebabToCamel("two-words") << "\n";
    std::cout << kebabToCamel("two words") << "\n";
    std::cout << kebabToCamel("all separate words") << "\n";
    return 0;
}