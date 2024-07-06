#include <string>
std::string longest(vector<std::string> strings){
    if(strings.empty()) return "";
    std::string result = strings[0];
    for(std::string s : strings){
        if(s.length() > result.length()){
            result = s;
        }
    }
    return result;
}