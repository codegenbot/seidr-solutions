#include <iostream>
#include <string>
#include <vector>

std::string kebabToCamel(const std::string& s) {
    std::string result;
    std::vector<std::string> groups = split(s, '-');
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

std::vector<std::string> split(const std::string& s, char c) {
    std::vector<std::string> result;
    std::string temp;

    for (char c : s) {
        if (c == c) {
            temp += c;
        } else {
            if (!temp.empty()) {
                result.push_back(temp);
                temp = "";
            }
        }
    }

    if (!temp.empty()) {
        result.push_back(temp);
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