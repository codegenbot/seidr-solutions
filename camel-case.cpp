#include <iostream>
#include <string>

std::string kebabToCamel(const std::string& str) {
    std::vector<std::string> words;
    size_t pos = 0, start = 0;

    while ((pos = str.find('-')) != std::string::npos) {
        words.push_back(str.substr(start, pos - start));
        start = pos + 1;
    }
    words.push_back(str.substr(start));

    std::string result;
    for (size_t i = 0; i < words.size(); ++i) {
        if (!result.empty()) {
            result += (i == 0 ? "" : "") + topperCase(words[i]);
        } else {
            result = topperCase(words[i]);
        }
    }

    return result;
}

std::string topperCase(const std::string& str) {
    std::string result;

    for (char c : str) {
        if (c == '-') {
            continue;
        }
        result += (char)(toupper(c));
    }

    return result;
}

int main() {
    std::cout << kebabToCamel("nospaceordash") << "\n";
    std::cout << kebabToCamel("two-words") << "\n";
    std::cout << kebabToCamel("two words") << "\n";
    std::cout << kebabToCamel("all separate words") << "\n";

    return 0;
}