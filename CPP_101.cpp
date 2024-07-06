#include <vector>
#include <string>

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
    size_t start = 0;
    for (size_t i = 0; i <= s.size(); i++) {
        if ((i == s.size() || !isalpha(s[i])) && start > 0) {
            size_t len = i - start;
            if (len > 0) {
                result.push_back(std::string(s, start, len));
                for (int j = 1; j < result.size(); j++) {
                    if (!issame(std::vector<std::string>(1,result[j])) && !std::count(expected.begin(), expected.end(), result[j])) {
                        return {};
                    }
                }
            }
            start = i + 1;
        }
    }
    return result;
}