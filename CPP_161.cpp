#include <cassert>
#include <string>
#include <vector>

int solve(std::string s) {
    if (s.empty()) {
        return 0;
    }
    std::vector<char> v;
    for (char c : s) {
        if (std::tolower(c) == 'a' || std::tolower(c) == 'e' || 
            std::tolower(c) == 'i' || std::tolower(c) == 'o' || std::tolower(c) == 'u') {
            v.push_back(std::tolower(c));
        }
    }
    return v.size();
}

int main() {
    assert(solve("aAeEiIoUu") == 6);
    std::cout << solve("#ccc") << std::endl;
    return 0;
}