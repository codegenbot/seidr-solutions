#include <vector>
#include <algorithm>
#include <string>

bool isSame(vector<string> a, vector<string> b) {
    for (int i = 0; i < a.size(); i++) {
        a[i] = a[i].erase(std::remove_if(a[i].begin(), a[i].end(), ::isspace), a[i].end());
        b[i] = b[i].erase(std::remove_if(b[i].begin(), b[i].end(), ::isspace), b[i].end());
    }
    return a == b;
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