#include <vector>
#include <algorithm>
#include <cctype>

bool issame(const std::string& s1, const std::string& s2) {
    auto it1 = s1.begin(), it2 = s2.begin();
    while (it1 != s1.end() && it2 != s2.end()) {
        if (std::tolower(*it1) != std::tolower(*it2))
            return false;
        ++it1, ++it2;
    }
    return it1 == s1.end() && it2 == s2.end();
}

vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> result = lst;
    for (auto it = result.begin(); it != result.end();) {
        if (it->length() % 2 == 1) {
            it = result.erase(it);
        } else {
            ++it;
        }
    }
    sort(result.begin(), result.end(),
         [](const string& a, const string& b) {
             if (a.length() != b.length()) {
                 return a.length() < b.length();
             } else {
                 return a < b;
             }
         });
    return result;
}