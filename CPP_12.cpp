#include <vector>
#include <string>

std::string longest(std::vector<std::string> strings){
    if(strings.empty()) {
        return "";
    }
    std::string result = strings[0];
    for(std::string s : strings) {
        if(s.length() > result.length()) {
            result = s;
        } else if(s.length() == result.length()) {
            result = s;
        }
    }
    return result;
}