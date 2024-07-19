#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    
    return a == b;
}

std::vector<int> unique(std::vector<int> vec) {
    std::sort(vec.begin(), vec.end());
    vec.erase(std::unique(vec.begin(), vec.end()), vec.end());
    return vec;
}

int main() {
    assert(issame({5, 3, 5, 2, 3, 3, 9, 0, 123}, {0, 2, 3, 5, 9, 123}));
    
    std::vector<int> vec1 = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    std::vector<int> vec2 = {0, 2, 3, 5, 9, 123};
    
    std::vector<int> unique_vec = unique(vec1);
    
    assert(issame(unique_vec, vec2));
    
    return 0;
}