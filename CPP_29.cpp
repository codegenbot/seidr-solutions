#include <vector>
#include <string>

bool issame(vector<string> str1, vector<string> str2) {
    if(str1.size() != str2.size()) {
        return false;
    }
    for(int i = 0; i < str1.size(); i++) {
        if(str1[i] != str2[i]) {
            return false;
        }
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
}