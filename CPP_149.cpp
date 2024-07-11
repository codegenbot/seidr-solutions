```
#include <iostream>
#include <vector>
#include <algorithm>

bool issame(vector<string> a, vector<string> b) {
    for (int i = 0; i < a.size() && i < b.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    return a.size() == b.size();
}

vector<vector<string>> sorted_list_sum(vector<string> lst) {
    vector<vector<string>> result;

    for (const auto& str : lst) {
        if (str.length() % 2 == 0)
            result.push_back({str});
    }

    sort(result.begin(), result.end(),
         [](const vector<string>& a, const vector<string>& b) {
             if (a.size() != b.size())
                 return a.size() - b.size();
             else
                 return a[0] < b[0];
         });

    return result;
}

int main() {
    vector<string> lst = {"aaaa", "bbbb", "dd", "cc"};
    assert(issame(sorted_list_sum(lst), {"ccc", "dd", "aaaa", "bbbb"}));
}