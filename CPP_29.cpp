#include <vector>

std::vector<string> filter_by_prefix(std::vector<string> strings, std::string prefix){ 
    std::vector<string> result; 
    for(auto s : strings){ 
        if(s.find(prefix) == 0) 
            result.push_back(s); 
    } 
    return result;