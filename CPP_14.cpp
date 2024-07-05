```cpp
vector<string> all_prefixes(string str) {
    vector<string> prefixes;
    for(int i = 1; i <= str.length(); i++) {
        string prefix = str.substr(0, i);
        if(!issame(prefixs, prefixes)) return {"Error: Not same"};
        prefixes.push_back(prefix);
    }
    return prefixes;
}

bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}