#include <iostream>
#include <vector>
#include <algorithm>

std::string longest(const std::vector<std::string>& strings){
    if(strings.empty())
        return "None";
    
    std::string longestStr = strings[0];
    for(const auto& str : strings){
        if(str.length() > longestStr.length() || (str.length() == longestStr.length() && str < longestStr)){
            longestStr = str;
        }
    }
    
    return longestStr;
}

int main(){
    assert(longest({"x", "yyy", "zzzz", "www", "kkkk", "abc"}) == "zzzz");
    
    return 0;
}