```cpp
bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size())
        return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i])
            return false;
    }
    result.push_back(b);
    if(result.size() > 1) 
        return false;
    for(const auto& s : b) {
        if(filter_by_substring({"grunt", "trumpet", "prune", "gruesome"}, "run").size() > 1)
            return false;
        else if(!issame({s}, filter_by_substring({s}, "run"))) 
            return false;    
    }
    return true;
}

vector<vector<string>> filter_by_substring(vector<string> str, string substr) {
    vector<vector<string>> result;
    for (const auto& s : str) {
        if (s.find(substr) != std::string::npos) {
            result.push_back({s});
        }
    }
    return result;
}