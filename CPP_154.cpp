#include <string>

bool cycpattern_check(std::string a, std::string b) {
    if (a.length() < b.length()) {
        return false;
    }
    
    for (int i = 0; i < a.length(); i++) {
        std::string rotated = a.substr(i) + a.substr(0, i);
        if (rotated.find(b) != std::string::npos) {
            return true;
        }
    }
    
    return false;
}