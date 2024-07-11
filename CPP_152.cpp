```cpp
#include <iostream>
#include <vector>
#include <utility>

bool issame(std::vector<int> a, std::vector<int> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::pair<int, int> compare(std::vector<int> a, std::vector<int> b) {
    bool foundA = false;
    bool foundB = false;
    for(int i = 0; i < a.size() && i < b.size(); i++) {
        if(a[i] == 2 && !foundA) {
            foundA = true;
        }
        if(b[i] == 2 && !foundB) {
            foundB = true;
        }
    }
    if(foundA && foundB) return {0, -1};
    if(foundA) return {-1, 0};
    if(foundB) return {1, -1};
    if(a.size() > b.size()) return {-1, 0};
    if(b.size() > a.size()) return {1, 0};
    if(a.size() == b.size()) return {0, 0};
}

int main() {
    assert(issame({1,2,3,5}, {-1,2,3,4}) == {0,1});
    return 0;
}