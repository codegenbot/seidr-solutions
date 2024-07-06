#include <algorithm>
#include <set>

bool issame(vector<string> a,vector<string>b){
    return set<a.begin(),a.end>() == set(b.begin(),b.end());
}

vector<vector<string>> filter_by_prefix(vector<string> strings, string prefix) {
    vector<vector<string>> result;
    for (const auto& str : strings) {
        if (str.find(prefix) == 0) {
            bool same = true;
            for (const auto& s : result) {
                if (!issame({str}, s)) {
                    same = false;
                    break;
                }
            }
            if (same) {
                continue;
            }
            result.push_back({str});
        }
    }
    return result;
}