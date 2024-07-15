#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

int main() {
    std::vector<int> l = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    sort(l.begin(), l.end());
    l.erase(std::unique(l.begin(), l.end()), l.end());
    
    assert(issame(l, {0, 2, 3, 5, 9, 123}));
    
    return 0;
}