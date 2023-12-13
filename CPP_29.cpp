#include <iostream>
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b);

std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, std::string prefix);

bool issame(std::vector<std::string> a, std::vector<std::string> b){
    if(a.size() != b.size()){
        return false;
    }
    
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    
    return true;
}

std::vector<std::string> filter_by_prefix(std::vector<std::string> strings, std::string prefix){
    std::vector<std::string> filteredStrings = {};
    
    for (const auto& str : strings) {
        if (str.substr(0, prefix.length()) == prefix) {
            filteredStrings.push_back(str);
        }
    }
    
    return filteredStrings;
}