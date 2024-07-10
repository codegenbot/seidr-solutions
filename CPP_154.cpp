#include <string> 

bool cycpattern_check(std::string a, std::string b) {
    std::string combined = a + a;
    return combined.find(b) != std::string::npos;
}