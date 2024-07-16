#include <string>
#include <cassert>

bool cycpattern_check(std::string a, std::string b) {
    std::string temp = b + b;
    return (temp.find(a) != std::string::npos);
}

int main() {
    cycpattern_check("winemtt", "tinem");
    return 0;
}