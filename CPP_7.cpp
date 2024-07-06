```cpp
#include <vector>
#include <string>

bool issame(vector<vector<string>> a, vector<vector<string>> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (!(a[i].size() == b[i].size() && a[i] == b[i])) return false;
    }
    return true;
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(auto str : strings){
        if(str.find(substring) != string::npos)
            result.push_back(str);
    }
    return result;
}