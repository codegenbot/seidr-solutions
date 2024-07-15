#include <iostream>
#include <vector>
#include <cassert>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    assert(issame(std::vector<std::string>{"271", "137", "314"},
                  std::vector<std::string>{"271", "137", "314"}));
    
    return 0;
}