#include <string>

bool cycpattern_check(std::string a, std::string b) {
    if(a.length() != b.length()) return false;
    std::string temp = a + a;
    return temp.find(b) != std::string::npos;
}

int main() {
    assert(cycpattern_check("winemtt", "tinem") == true);
    
    return 0;
}