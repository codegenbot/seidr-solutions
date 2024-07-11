#include <iostream>
#include <vector>
#include <string>
#include <cassert>

std::string longest(std::vector<std::string> strings) {
    if (strings.empty()) {
        return "None";
    }
    
    std::string longestStr = strings[0];
    for (const std::string& str : strings) {
        if (str.length() > longestStr.length() || (str.length() == longestStr.length() && str < longestStr)) {
            longestStr = str;
        }
    }
    
    return longestStr;
}

int main() {
    assert (longest({"x", "yyy", "zzzz", "www", "kkkk", "abc"}) == "zzzz");
    return 0;
}