#include <string>

std::string longest(vector<string> strings){
    if(strings.empty()) return "";
    std_result result = strings[0];
    for(auto s : strings) {
        if(s.length() > result.length())
            result = s;
    }
    return result;
}