```
#include <algorithm>
#include <vector>
#include <string>

bool main() {
    if (!issame({"aaaa", "bbbb", "dd", "cc"}, {"cc", "dd", "aaaa", "bbbb"}))
        return false;
    return true;
}

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;

    for (int i = 0; i < a.size(); i++) {
        if (sorted_list_sum({a[i], b[i]})[0] != sorted_list_sum({b[i], a[i]})[0]) {
            return false;
        }
    }

    return true;
}

vector<string> sorted_list_sum(vector<string> lst) {
    vector<string> result;

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