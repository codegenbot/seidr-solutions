#include <vector>
#include <iostream>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    std::vector<int> result;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] == b[i]) {
            result.push_back(1);
        } else {
            result.push_back(0);
        }
    }
    return result;
}

int main() {
    assert (issame({1,2,3,5},{-1,2,3,4}) == std::vector<int>({0, 1, 1, 0}));
    return 0;
}