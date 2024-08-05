#include <algorithm>
#include <string>
#include <cctype>

std::string solve(const std::string &s) {
    std::string result = s;
    if (!result.empty()) {
        result[1] = std::toupper(result[1]);
    }
    return result;
}

int main() {
    assert(solve("#ccc") == "#CCC");
    
    return 0;
}