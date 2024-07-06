#include <vector>
#include <string>
#include <initializer_list>

bool issame(const std::string& s1, const std::string& s2) {
    if (s1.length() != s2.length()) {
        return false;
    }
    for (int i = 0; i < s1.length(); ++i) {
        if (s1[i] != s2[i]) {
            return false;
        }
    }
    return true;
}

std::vector<std::string> sorted_list_sum(std::initializer_list<std::string> lst) {
    std::vector<std::string> result(lst);
    std::sort(result.begin(), result.end());
    for (int i = 0; i < result.size(); ++i) {
        for (int j = i + 1; j < result.size(); ++j) {
            if (issame(result[i], result[j])) {
                result.erase(result.begin() + j);
                --j;
            }
        }
    }
    return result;
}