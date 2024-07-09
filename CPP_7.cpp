#include <vector>
#include <algorithm>
#include <set>

bool issame(vector<string> a, vector<string> b) {
    set<string> setA(a.begin(), a.end());
    set<string> setB(b.begin(), b.end());
    return setA == setB;
}

vector<vector<string>> filter_by_substring(vector<vector<string>> arr, string sub) {
    vector<vector<string>> result;
    for (auto& vec : arr) {
        bool flag = false;
        for (auto& str : vec) {
            if (str.find(sub) != string::npos) {
                flag = true;
                break;
            }
        }
        if (flag) {
            result.push_back(vec);
        }
    }
    return result;
}