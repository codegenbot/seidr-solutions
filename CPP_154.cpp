#include <string>
#include <cassert>

using namespace std;

bool cycpattern_check(std::string a, std::string b) {
    if(a.length() != b.length()) return false;
    std::string temp = b + b;
    return (temp.find(a) != std::string::npos);
}

int main() {
    assert(cycpattern_check("winemtt", "tinem") == true);
    
    return 0;
}