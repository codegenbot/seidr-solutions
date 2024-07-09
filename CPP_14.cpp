#include <vector>
#include <string>

bool issame(string str1, string str2){
    if (str1.length() != str2.length()) {
        return false;
    }
    
    for (int i = 0; i < str1.length(); ++i) {
        if (str1[i] != str2[i]) {
            return false;
        }
    }
    
    return true;
}

vector<string> all_prefixes(string str){
    vector<string> result;
    for (int i = 1; i <= str.size(); ++i) {
        result.push_back(str.substr(0, i));
    }
    return result;
}