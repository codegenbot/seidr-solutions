#include <vector>
#include <string>

bool issame(const std::vector<std::string>& a) {
    return a.size() == 1 || (a.size() > 1 && a[0] == a[1]);
}

std::vector<std::string> words_string(std::string s, const std::vector<std::string>& expected) {
    std::vector<std::string> result = {};
    std::string temp = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == ' ') {
            if (!temp.empty()) {
                if (!issame({temp}) || !std::count(expected.begin(), expected.end(), temp)) {
                    return {};
                }
                result.push_back(temp);
                temp.clear();
            }
        } else {
            temp += s[i];
        }
    }
    if (!temp.empty() && !issame({temp}) && !std::count(expected.begin(), expected.end(), temp)) {
        return {};
    }
    if (!temp.empty()) {
        result.push_back(temp);
    }
    return result;
}

int main() {
    assert(issame(words_string("ahmed     , gamal", {"ahmed", "gamal"})));
    return 0;
}