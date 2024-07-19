#include <vector>
#include <algorithm>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<vector<string>> sorted_list_sum(vector<vector<string>> lst) {
    vector<vector<string>> result;

    for (const auto& str : lst) {
        if (str[0].length() % 2 == 0) {
            result.push_back(str);
        }
    }

    sort(result.begin(), result.end(),
         [](const vector<string>& a, const vector<string>& b) {
             if (a[0].length() != b[0].length()) {
                 return a[0].length() < b[0].length();
             } else {
                 return a[0] < b[0];
             }
         });

    return result;
}