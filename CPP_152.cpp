#include <vector>
#include <iostream>

bool isSame(std::vector<int> a, std::vector<int> b) {
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    assert(isSame({1,2,3,5},{-1,2,3,4}));
    return 0;
}