```cpp
#include <vector>
#include <string>

bool issame(const vector<string>& a, const vector<string>& b) {
    if(a.size() != b.size()) 
        return false;
    
    for(size_t i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) 
            return false;
    }
    
    return true;
}

vector<string> filter_by_substring(vector<string> strings, string substring) {
    vector<string> result;
    for(auto &s : strings) {
        if(s.find(substring) == string::npos)
            continue; // not found, skip this one
        bool same = issame({s}, {substring});
        if(same)
            result.push_back(s);
    }
    return result;
}