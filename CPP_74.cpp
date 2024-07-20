#include <iostream>
#include <vector>
#include <string>
#include <cassert>
#include <algorithm>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    assert(issame(std::vector<std::string>{"this"}, std::vector<std::string>{}) == false);
    
    return 0;
}