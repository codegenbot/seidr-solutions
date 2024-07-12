#include <vector>
#include <algorithm>
#include <cctype>

bool issame(const std::string& s1, const std::string& s2) {
    if (s1.size() != s2.size()) return false;
    for (int i = 0; i < s1.size(); ++i) {
        if (std::tolower(s1[i]) != std::tolower(s2[i])) return false;
    }
    return true;
}

std::vector<std::string> sorted_list_sum(std::vector<std::string> lst) {
    std::vector<std::string> result = lst;
    for (auto it = result.begin(); it != result.end();) {
        if (it->length() % 2 == 1) {
            it = result.erase(it);
        } else {
            ++it;
        }
    }
    sort(result.begin(), result.end(),
         [](const std::string& a, const std::string& b) {
             if (a.length() != b.length()) {
                 return a.length() < b.length();
             } else {
                 return a < b;
             }
         });
    return result;
}