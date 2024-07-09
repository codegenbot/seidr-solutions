#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    for(int i = 0; i < a.size(); i++) {
        if(!filter_by_substring(a[i], b[i])) return false;
    }
    return true;
}

bool filter_by_substring(string s1, string s2) {
    if(s2.find(s1) != string::npos)
        return true;
    else
        return false;
}