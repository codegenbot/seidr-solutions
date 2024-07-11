#include <vector>
#include <iostream>
#include <string>

std::string camelCase(const std::string& s) {
    std::string result;
    bool first = true;

    for (const auto &str : s.split("-")) {
        if (!str.empty()) {
            if (first)
                result += tolower(str);
            else
                result += toupper(str[0]) + string(str.begin() + 1, str.end());
            first = false;
        }
    }

    return result;
}

std::string string::split(const std::string &delimiter) const {
    size_t pos = 0, lastPos = 0;
    std::vector<std::string> res;

    while ((pos = find(delimiter.begin(), delimiter.end(), pos)) != string::npos) {
        res.push_back(substr(lastPos, pos - lastPos));
        lastPos = pos + delimiter.size();
    }

    res.push_back(substr(lastPos));

    return res.empty() ? "" : *res.rbegin();
}

int main() {
    std::string s;
    while (std::cin >> s) {
        std::cout << camelCase(s) << std::endl;
    }
    return 0;
}