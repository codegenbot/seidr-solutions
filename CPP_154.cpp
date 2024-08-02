#include <string>
#include <cassert>

bool cycpattern_check(std::string a, std::string b) {
    std::string temp = a + a;
    return temp.find(b) != std::string::npos;
}