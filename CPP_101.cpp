#include <vector>
#include <string>
#include <initializer_list>

bool issame(std::vector<std::string> a) {
    if (a.size() == 0) return true;
    auto it = std::unique(a.begin(), a.end());
    a.erase(it, a.end());
    return a.size() == 1;
}

std::vector<std::string> words_string(std::string s, const std::vector<std::string>& expected) {
    std::vector<std::string> result = {};
    for (int i = 0; i < s.size(); i++) {
        std::string temp = "";
        while (i < s.size() && s[i] != ' ') {
            temp += s[i];
            i++;
        }
        if (!temp.empty()) {
            if (!issame({temp}) || !std::count(expected.begin(), expected.end(), temp)) {
                return {};
            }
            result.push_back(temp);
        }
    }
    return result;
}