#include <algorithm>
#include <cassert>
#include <string>
#include <vector>

std::pair<std::string, std::string> solve(const std::string& s, const std::string& c) {
    std::string temp = s;
    
    for (char ch : c) {
        temp.erase(std::remove(temp.begin(), temp.end(), ch), temp.end());
    }

    std::string result = temp;
    std::string reversed = temp;
    std::reverse(reversed.begin(), reversed.end());

    return {result, (result == reversed) ? "True" : "False"};
}