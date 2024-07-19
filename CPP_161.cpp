#include <string>
#include <iostream>

std::string solve(std::string s) {
    std::string result = "";
    for (char c : s) {
        if (c == '#') {
            result += "1";
        } else {
            result += "0";
        }
    }
    return result;
}

int main() {
    std::cout << solve("#ccc") << std::endl;  
    return 0;
}