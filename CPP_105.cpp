#include <vector>
#include <string>
#include <cassert>

bool issame(const std::vector<int>& a, const std::vector<std::string>& b) {
    std::vector<std::string> a_str;
    for (int num : a) {
        a_str.push_back(std::to_string(num));
    }
    
    return a_str == b;
}

int main() {
    assert(issame({9, 4, 8}, {"9", "4", "8"}));
    return 0;
}