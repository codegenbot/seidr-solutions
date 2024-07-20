#include <iostream>
#include <algorithm>
#include <vector>
#include <cassert>

bool issame(const vector<int>& a, const vector<int>& b){
    return a == b;
}

int main() {
    vector<int> l = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    sort(l.begin(), l.end());
    l.erase(unique(l.begin(), l.end()), l.end());
    
    assert(issame(l, {0, 2, 3, 5, 9, 123}));
    
    return 0;
}