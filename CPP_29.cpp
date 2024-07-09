Here's the modified code:

#include <iostream>
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if(a.size() != b.size()) {
        return false;
    }
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, std::string prefix){
    std::vector<std::string> result;
    string s;
    for(s = strings.begin()->c_str(); s < strings.end()->c_str(); s++){
        if(s.find(prefix) == 0)
            result.push_back(s);
    }
    return result;