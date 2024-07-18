#include <string>

std::string findLongestString(std::vector<std::string> strings) {
    if(strings.empty())
        return "None";
    
    std::string longest_str = strings[0];
    for(const std::string& s : strings){
        if(s.length() > longest_str.length() || (s.length() == longest_str.length() && s < longest_str)){
            longest_str = s;
        }
    }
    
    return longest_str;
}