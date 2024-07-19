#include <vector>
#include <algorithm>

bool issame(vector<string> a, vector<string> b) {
    return a == b;
}

vector<vector<string>> sorted_list_sum(vector<string> lst) {
    vector<vector<string>> result;

    for (const auto& str : lst) {
        if (str.length() % 2 == 0) {
            vector<string> temp = {str};
            result.push_back(temp);
        }
    }

    for (auto &vec : result) {
        sort(vec.begin(), vec.end());
    }

    sort(result.begin(), result.end(),
         [](const vector<string>& a, const vector<string>& b) {
             if (a.size() != b.size()) {
                 return a.size() < b.size();
             } else {
                 for (size_t i = 0; i < a.size(); ++i) {
                     if (a[i] > b[i]) {
                         return true;
                     }
                     else if (a[i] < b[i]) {
                         return false;
                     }
                 }
                 return false;
         });

    return result;
}