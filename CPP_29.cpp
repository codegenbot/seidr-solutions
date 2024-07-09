```cpp
bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<vector<string>> filter_by_prefix(vector<string> strings, string prefix){
    vector<vector<string>> result;
    for (const auto& str : strings) {
        bool same = false;
        for(const auto& other_str : strings) {
            if(issame({str}, {other_str}) && !same) {
                same = true;
                strings.erase(remove(strings.begin(), strings.end(), other_str), strings.end());
            }
        }
        if(!same)
            result.push_back({str});
    }
    return result;
}