```cpp
bool issame(vector<string> a, vector<string> b){
    if(a == b)
        return true;
    else
        return false;
}

vector<vector<string>> group_by_prefix(vector<string> strings) {
    map<string, vector<string>> prefix_to_strings;
    
    for(string s : strings) {
        size_t pos = 0;
        string prefix;
        while((pos = s.find('/')) != string::npos) {
            prefix = s.substr(0, pos);
            if(prefix_to_strings.count(prefix)) {
                prefix_to_strings.at(prefix).push_back(s);
            } else {
                vector<string> vec = {s};
                prefix_to_strings[prefix] = vec;
            }
            s.erase(0, pos + 1);
        }
        prefix_to_strings[s].push_back(s);
    }

    vector<vector<string>> result;
    
    for(auto p : prefix_to_strings) {
        if(p.second.size() > 1)
            result.push_back(p.second);
    }
    
    return result;
}