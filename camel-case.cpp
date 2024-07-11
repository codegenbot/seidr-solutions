#include <vector>
#include <iostream>
#include <string>

std::vector<std::string> split(const std::string& s, char c) {
    std::vector<std::string> result;
    size_t prev = 0, next = s.find(c);
    while (next != std::string::npos) {
        result.push_back(s.substr(prev, next - prev));
        prev = next + 1;
        next = s.find(c, prev);
    }
    result.push_back(s.substr(prev));
    return result;

}

std::string camelCase(const std::string& s) {
    std::vector<std::string> groups;
    if (s.find(' ') != std::string::npos)
        groups = split(s, ' ');
    else if (s.find('-') != std::string::npos)
        groups = split(s, '-');

    std::string result;
    for (int i = 0; i < groups.size(); ++i) {
        if (i > 0)
            result += char(toupper(groups[i][0]));
        else
            result += tolower(groups[i][0]);
        result += groups[i].substr(1);
    }

    return result;
}

int main() {
    std::string s;
    while (std::getline(std::cin, s)) {
        std::cout << camelCase(s) << std::endl;
    }
    return 0;
}