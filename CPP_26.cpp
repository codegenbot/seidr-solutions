#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

void remove_duplicates(std::vector<int>& v) {
    v.erase(std::unique(v.begin(), v.end()), v.end());
}

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    std::vector<int> a_temp = a;
    std::vector<int> b_temp = b;

    remove_duplicates(a_temp);
    remove_duplicates(b_temp);

    return a_temp == b_temp;
}

int main() {
    assert(issame({1, 2, 3, 2, 4, 3, 5}, {1, 4, 5}));
    return 0;
}