#include <iostream>
#include <vector>
#include <string>
#include <cassert>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    return std::equal(a.begin(), a.end(), b.begin());
}

int main() {
    assert(issame(std::vector<std::string>{"271", "137", "314"}, 
                  std::vector<std::string>{"271", "137", "314"}));
    return 0;
}