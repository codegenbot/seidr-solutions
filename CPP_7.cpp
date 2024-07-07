```cpp
#include <vector>
#include <algorithm>

bool issame(vector<string> a, vector<string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (find(b.begin(), b.end(), a[i]) == b.end())
            return false;
    }
    return true;
}

vector<vector<string>> filter_by_substring(vector<vector<string>> strings) {
    vector<vector<string>> result;
    for (vector<string> s : strings) {
        bool found = false;
        for (vector<string> sub_s : result) {
            if (issame(s, sub_s)) {
                found = true;
                break;
            }
        }
        if (!found) {
            vector<string> temp;
            for (string str : s) {
                if (str.find("substring") != string::npos)
                    temp.push_back(str);
            }
            result.push_back(temp);
        }
    }
    return result;
}