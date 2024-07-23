#include <string>
#include <vector>

std::string longest(std::vector<std::string> strings){
    if(strings.empty()) return "";
    std::string result = strings[0];
    for(auto str : strings){
        if(str.length() > result.length()) result = str;
    }
    return result;
}