#include <iostream>
#include <vector>
#include <string>

bool isSame(std::vector<std::string> a, std::vector<std::string> b) {
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
    std::string strPrefix = prefix; // variable declaration
    std::vector<std::string> result;
    for(std::string s : strings){
        if(s.find(strPrefix) == 0)
            result.push_back(s);
    }
    return result;