#include <string>

std::string findLongestString(const std::vector<std::string>& strings) {
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