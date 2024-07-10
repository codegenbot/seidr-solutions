#include <vector>
#include <string>
#include <initializer_list>

bool issame(string s1, string s2) {
    if(s1.size() != s2.size()) {
        return false;
    }
    for(int i = 0; i < s1.size(); i++) {
        if(s1[i] != s2[i]) {
            return false;
        }
    }
    return true;
}

vector<string> all_prefixes(string str) {
    vector<string> result;
    for (int i = 1; i <= str.length(); ++i) {
        result.push_back(str.substr(0, i));
    }
    return result;
}