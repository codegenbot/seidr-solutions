#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

bool issame(vector<string> a,vector<string>b){
    return a==b;
}

std::vector<std::string> filter_by_substring(std::vector<std::string> strings, std::string substring) {
    std::vector<std::string> result;
    
    for(string s : strings){
        if(s.find(substring) != std::string::npos)
            result.push_back(s);
    }
    return result;
}