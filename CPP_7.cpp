#include <vector>
#include <string>

bool issame(vector<string> a, vector<string> b) {
    if(a.size() != b.size()) return false;
    for(string s : a) {
        if(find(b.begin(), b.end(), s) == b.end())
            return false;
    }
    return true;
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(string s : strings){
        if(s.find(substring) != string::npos)
            result.push_back(s);
    }
    return result;
}