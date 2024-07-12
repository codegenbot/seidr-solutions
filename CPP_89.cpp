#include <string>

std::string encrypt(std::string s) {
    std::string result = s;
    for (char c : s) {
        if (c == 'a') c = 'e';
        else if (c == 'A') c = 'E';
    }
    return result;
}