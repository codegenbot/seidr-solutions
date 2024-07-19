#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b) {
    std::sort(a.begin(), a.end());
    std::sort(b.begin(), b.end());
    
    return a == b;
}

std::vector<int> unique_vec1(std::vector<int> vec1) {
    std::sort(vec1.begin(), vec1.end());
    vec1.erase(std::unique(vec1.begin(), vec1.end()), vec1.end());
    return vec1;
}

int main() {
    assert(issame({5, 3, 5, 2, 3, 3, 9, 0, 123}, {0, 2, 3, 5, 9, 123}));
    
    std::vector<int> vec1 = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    std::vector<int> vec2 = {0, 2, 3, 5, 9, 123};
    
    std::vector<int> unique_vec = std::unique(vec1.begin(), vec1.end());
    
    assert(issame(unique_vec, vec2));
    
    return 0;
}