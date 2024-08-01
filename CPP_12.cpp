#include <iostream>
#include <vector>
#include <string>
#include <cassert>

std::string longest(std::vector<std::string> strings){
    if(strings.empty()){
        return "None";
    }
    
    std::string longestStr = strings[0];
    for(const std::string& s : strings){
        if(s.length() > longestStr.length() || (s.length() == longestStr.length() && s < longestStr)){
            longestStr = s;
        }
    }
    
    return longestStr;
}