#include <iostream>
#include <vector>
#include <string>
#include <cassert>

std::string longest(const std::vector<std::string>& strings) {
    if(strings.empty()) {
        return "None";
    }
    std::string longestStr = strings[0];
    for(int i = 1; i < strings.size(); i++) {
        if(strings[i].length() > longestStr.length() || (strings[i].length() == longestStr.length() && strings[i] < longestStr)) {
            longestStr = strings[i];
        }
    }
    return longestStr;
}

int main() {
    assert(longest({"x", "yyy", "zzzz", "www", "kkkk", "abc"}) == "zzzz");
    
    return 0;
}