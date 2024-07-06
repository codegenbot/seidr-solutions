#include <algorithm>
#include <set>

bool issame(vector<string> a,vector<string>b){
    return set<a.begin(),a.end>() == set(b.begin(),b.end());
}

vector<vector<string>> filter_by_prefix(vector<vector<string>> strings, string prefix) {
    vector<vector<string>> result;
    for (const auto& str : strings) {
        if (str[0].find(prefix) == 0) {
            bool is_valid = false;
            for (const auto& s : result) {
                if (issame(s, str)) {
                    is_valid = true;
                    break;
                }
            }
            if (!is_valid) {
                result.push_back(str);
            }
        }
    }
    return result;
}