```cpp
bool issame(vector<string> a, vector<string> b){
    if(a == b)
        return true;
    else
        return false;
}

vector<vector<string>> group_by_prefix(vector<vector<string>>& strings) {
    unordered_map<string, vector<string>> mp;
    for (auto& s : strings) {
        string prefix = s[0];
        mp[prefix].push_back(s);
    }
    vector<vector<string>> result;
    for (auto& p : mp) {
        if (!issame(result, {{p.first}})) {
            result.push_back({p.first});
        }
        for (auto& str : p.second) {
            bool found = false;
            for (int i = 0; i < result.size(); ++i) {
                if (issame({str}, result[i])) {
                    result[i].push_back(str);
                    found = true;
                    break;
                }
            }
            if (!found) {
                result.push_back({str});
            }
        }
    }
    return result;
}