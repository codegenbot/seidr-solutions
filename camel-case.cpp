#include <iostream>
#include <string>

std::string camelCase(const std::string& s) {
    std::string result;
    for (const auto& word : s.split("-")) {
        if (!result.empty()) {
            result[0] = toupper(result[0]);
        }
        result += word;
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

std::string& split(const std::string& s, char c, std::vector<std::string>& v) {
    size_t i = 0;
    while ((i = s.find(c, i)) != std::string::npos) {
        v.push_back(s.substr(0, i));
        s.erase(0, i + 1);
        i = 0;
    }
    v.push_back(s);
    return s;
}