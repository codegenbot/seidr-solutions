#include <algorithm>
#include <vector>
#include <string>
#include <cctype>

bool issame(const std::string& s1, const std::string& s2) {
    std::string t1 = s1;
    std::string t2 = s2;
    std::transform(t1.begin(), t1.end(), t1.begin(),
                   [](unsigned char c){ return std::tolower(c); });
    std::transform(t2.begin(), t2.end(), t2.begin(),
                   [](unsigned char c){ return std::tolower(c); });
    return t1 == t2;
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