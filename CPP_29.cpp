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

std::vector<std::string> filterByPrefix(std::vector<std::string> strings, std::string prefix){
    std::vector<std::string> resultVector;
    for(string s : strings){
        if(s.find(prefix) == 0)
            resultVector.push_back(s);
    }
    return resultVector;