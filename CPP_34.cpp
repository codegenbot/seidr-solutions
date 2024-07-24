#include <iostream>
#include <set>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(const set<int>& a, const set<int>& b) {
    return a == b;
}

int main() {
    set<int> set1({5, 3, 5, 2, 3, 3, 9, 0, 123});
    set<int> set2({0, 2, 3, 5, 9, 123});
    
    set1.erase(std::unique(set1.begin(), set1.end()), set1.end());
    set2.erase(std::unique(set2.begin(), set2.end()), set2.end());
    
    assert(issame(set1, set2));
    
    return 0;
}