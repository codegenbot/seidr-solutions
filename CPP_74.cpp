#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cassert>

bool issame(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return a.size() == b.size() && std::equal(a.begin(), a.end(), b.begin());
}

bool total_match(const std::vector<std::string>& a, const std::vector<std::string>& b) {
    return issame(a, b);
}

int main() {
    assert(total_match(std::vector<std::string>{"this"}, std::vector<std::string>{}) == false);
    
    return 0;
}