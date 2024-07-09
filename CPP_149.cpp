#include <vector>
#include <algorithm>
#include <string>

int issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return 0;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return 0;
    }
    return 1;
}

std::vector<std::string> sorted_list_sum(std::vector<std::string> lst) {
    std::vector<std::string> result;
    for (const auto& str : lst) {
        if (str.length() % 2 == 0) {
            result.push_back(str);
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