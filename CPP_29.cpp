#include <vector>
#include <algorithm>

bool issame(vector<string> a,vector<string>b){
    return (a.size() == b.size()) && all_of(a.begin(), a.end(), [&b](string s) {return find(b.begin(), b.end(), s) != b.end();});
}

vector<vector<string>> filter_by_prefix(vector<vector<string>> strings, string prefix) {
    vector<vector<string>> result;
    for (const auto& str : strings) {
        if (issame({str}, {prefix})) 
            result.push_back(str);
    }
    return result;
}