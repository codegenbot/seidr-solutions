#include <vector>
#include <string>

bool issame(const std::string& s1, const std::string& s2) {
    if (s1.length() != s2.length()) {
        return false;
    }
    for (int i = 0; i < s1.length(); i++) {
        if (s1[i] != s2[i]) {
            return false;
        }
    }
    return true;
}

std::vector<std::string> separate_paren_groups(const std::string& paren_string) {
    std::vector<std::string> result;
    int start = 0;
    for (int i = 0; i < paren_string.size(); ++i) {
        if (paren_string[i] == '(') {
            if (start == 0)
                start = i + 1;
            else if (paren_string[i] == ')') {
                result.push_back(paren_string.substr(start - 1, i - start + 2));
                start = 0;
            }
        } else if (start > 0) {
            if (paren_string[i] == ')') {
                result.push_back(paren_string.substr(start - 1, i - start + 1));
                start = 0;
            }
        }
    }
    if (start > 0)
        result.push_back(paren_string.substr(start - 1));
    return result;
}