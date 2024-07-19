```cpp
#include <string>
#include <vector>
#include <map>

bool areEqual(vector<string> a, vector<string> b) {
    return a == b;
}

vector<vector<string>> sorted_list_sum(vector<string> lst) {
    std::map<std::string, int> mp;
    for (auto &s : lst)
        ++mp[s];
    vector<vector<string>> res;
    for (auto p : mp) {
        if (p.second > 1)
            res.push_back({p.first, string(p.second - 1, 'c')});
    }
    return res;
}