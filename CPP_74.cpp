#include <iostream>
#include <vector>
#include <string>
#include <cassert>
#include <algorithm>

bool areEqual(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    
    for (size_t i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    assert(areEqual(std::vector<std::string>{"this"}, std::vector<std::string>{}) == true);
    assert(areEqual(std::vector<std::string>{"hello", "world"}, std::vector<std::string>{"hello", "world"}) == true);
    assert(areEqual(std::vector<std::string>{"apple", "orange"}, std::vector<std::string>{"banana", "grape"}) == false);

    return 0;
}