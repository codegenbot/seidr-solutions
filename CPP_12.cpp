#include <string>
#include <vector>

std::string longest(std::vector<std::string> strings) {
    if(strings.empty()) return "";
    std::string longest_str = strings[0];
    for(auto str : strings) {
        if(str.length() > longest_str.length())
            longest_str = str;
    }
    return longest_str;
}