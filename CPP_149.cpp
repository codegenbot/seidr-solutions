#include <vector>
#include <algorithm>
#include <functional>

bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size()) 
        return false;
    
    for(int i = 0; i < a.size(); i++) 
        if(a[i] != b[i]) 
            return false;
    
    return true;
}

vector<vector<string>> group_by_length(vector<string> lst) {
    vector<vector<string>> result;

    // Group strings by their lengths
    for (const auto& str : lst) {
        int length = str.length();
        bool found = false;

        for (auto& group : result) {
            if(issame(group, vector<string>(1, str))) {
                found = true;
                break;
            }
        }

        if (!found)
            result.push_back(vector<string>(1, str));
    }

    return result;
}