#include <iostream>
#include <vector>
#include <string>

bool issame(std::vector<std::string> a, std::vector<std::string> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    int by_length[3] = {9,4,8};
    std::vector<std::string> vec = {"Nine", "Eight", "Four"};
    assert(issame({""},vec));
}