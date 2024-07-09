#include <vector>
#include <string>

std::string longest(std::vector<std::string> strings) {
    if (strings.empty()) return "";
    std::string res = strings[0];
    for(auto s : strings) {
        if(s.length() > res.length())
            res = s;
    }
    return res;
}