#include <vector>
#include <algorithm>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<vector<string>> sorted_list_sum(vector<string> lst) {
    vector<vector<string>> result;

    for (const auto& str : lst) {
        if (str.length() % 2 == 0) {
            vector<string> temp;
            temp.push_back(str);
            result.push_back(temp);
        }
    }

    for (auto &vec : result) {
        sort(vec.begin(), vec.end(),
             [](const string& a, const string& b) {
                 if (a.length() != b.length()) {
                     return a.length() < b.length();
                 } else {
                     return a < b;
                 }
             });
    }

    return result;
}