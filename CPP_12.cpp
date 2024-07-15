#include <string>
#include <vector>

std::string longest(std::vector<std::string> strings){
    if(strings.empty()){
        return "None";
    }
    
    std::string longestString = strings[0];
    for(const std::string& str : strings){
        if(str.length() > longestString.length() || (str.length() == longestString.length() && str < longestString)){
            longestString = str;
        }
    }
    
    return longestString;
}