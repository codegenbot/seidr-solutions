#include <algorithm>
#include <cassert>
#include <string>
#include <cctype>

std::string solve(const std::string &s);

int main() {
    assert(solve("#ccc") == "#CCC");
    
    return 0;
}