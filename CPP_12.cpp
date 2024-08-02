#include <vector>
#include <string>

std::string longest(std::vector<std::string> strings){
    if(strings.empty()) return "";
    std::string res = strings[0];
    for(auto str : strings){
        if(str.length() > res.length()){
            res = str;
        }
    }
    return res;
}