#include <iostream>
#include <vector>
#include <algorithm>

std::string longest(const std::vector<std::string>& strings) {
    if (strings.empty()) {
        return "None";
    }
    
    std::string longestString = strings[0];
    for (const std::string& s : strings) {
        if (s.length() > longestString.length() || (s.length() == longestString.length() && s < longestString)) {
            longestString = s;
        }
    }
    
    return longestString;
}

int main() {
    assert(longest({"x", "yyy", "zzzz", "www", "kkkk", "abc"}) == "zzzz");
    return 0;
}