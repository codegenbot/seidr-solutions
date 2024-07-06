#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b, vector<string> c) {
    if(a.size() != b.size() || a.size() != c.size()) return false;
    for(int i = 0; i < a.size(); ++i) {
        if(a[i] != b[i] || a[i] != c[i]) return false;
    }
    return true;
}

vector<string> filter_by_prefix(vector<string> strings, string prefix){
    vector<string> result;
    for(string s : strings){
        if(s.find(prefix) == 0)
            result.push_back(s);
    }
    return result;