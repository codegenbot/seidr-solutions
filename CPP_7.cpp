#include <vector>
#include <string>
#include <algorithm>

bool issame(const vector<string>& a, const vector<string>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (issame(a[i], b[i]) == false) {
            return false;
        }
    }
    return true;
}

vector<string> filter_by_substring(vector<string> strings, string substring){
    vector<string> result;
    for(auto str : strings){
        if(str.find(substring) != std::string::npos && !issame({str}, {substring})){
            result.push_back(str);
        }
    }
    return result;
}