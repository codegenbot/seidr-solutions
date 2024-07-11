#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    return a == b;
}

int maximum(const std::vector<int>& vec) {
    return *std::max_element(vec.begin(), vec.end());
}

int main() {
    assert(issame(std::vector<int>{1, 2, 3, -23, 243, -400, 0}, std::vector<int>{0}));
    return 0;
}  