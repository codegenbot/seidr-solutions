```cpp
bool check_dict_case(map<string, string> dict) {
    if(dict.empty()) return false;
    bool all_lower = true;
    bool all_upper = true;
    
    for(auto &p : dict) {
        string key = p.first;
        for(char &c : key) {
            c = tolower(c);
        }
        if(strncasecmp(p.first.c_str(), p.second.c_str(), 1) != 0)
            return false;
        all_lower &= true;
        all_upper &= true;
    }
    
    return (all_lower || all_upper);
}