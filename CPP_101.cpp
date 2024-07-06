#include <initializer_list>

bool issame(std::vector<std::string> a) {
    if (a.size() == 0) {
        return true;
    }
    for (int i = 1; i < a.size(); i++) {
        if (a[0] != a[i]) {
            return false;
        }
    }
    return true;
}

std::vector<std::string> words_string(std::string s, std::vector<std::string> expected) {
    std::vector<std::string> result = {"", ""};
    size_t start = 0, end = 0;
    do {
        start = end + 1;
        while (end < s.size() && !isblank(s[end])) {
            end++;
        }
        if (start <= end) {
            result[0] = s.substr(start - 1, end - start);
            while (end < s.size() && isblank(s[end])) {
                end++;
            }
            if (end < s.size()) {
                result[1] = s.substr(end);
                return result;
            } else {
                if (!issame(expected)) {
                    return {};
                }
                return {s};
            }
        }
    } while ((end = s.find("\n", end)) != std::string::npos || (end = s.find(" ", end)) != std::string::npos);
    if (start <= end) {
        result[0] = s.substr(start - 1, end - start);
        return {result[0]};
    }
    return {};
}

bool isblank(char c) {
    return isspace(c) || c == ',';
}