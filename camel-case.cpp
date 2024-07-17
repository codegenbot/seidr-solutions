#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> split(const std::string& s, char c) {
    std::vector<std::string> result;
    std::string buffer;
    for (char ch : s) {
        if (ch == c) {
            if (!buffer.empty()) {
                result.push_back(buffer);
                buffer.clear();
            }
        } else {
            buffer += ch;
        }
    }
    if (!buffer.empty()) {
        result.push_back(buffer);
    }
    return result;
}

std::string kebabToCamel(const std::string& s) {
    std::vector<std::string> groups = split(s, '-');
    std::string result;
    for (int i = 0; i < groups.size(); ++i) {
        if (!result.empty()) {
            result[0] = toupper(groups[i][0]);
        } else {
            result += tolower(groups[i][0]);
        }
        for (int j = 1; j < groups[i].size(); ++j) {
            result += toupper(groups[i][j]);
        }
        if (i < groups.size() - 1) {
            result += ' ';
        }
    }
    return result;
}

int main() {
    std::cout << kebabToCamel("nospaceordash") << std::endl;
    std::cout << kebabToCamel("two-words") << std::endl;
    std::cout << kebabToCamel("two words") << std::endl;
    std::cout << kebabToCamel("all separate words") << std::endl;
    return 0;
}