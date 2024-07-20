#include <iostream>
#include <algorithm>
#include <vector>
#include <cassert>

using namespace std;

bool issame(const vector<int>& a, const vector<int>& b){
    return a == b;
}

int main() {
    vector<int> l = {5, 3, 5, 2, 3, 3, 9, 0, 123};
    sort(l.begin(), l.end());
    l.erase(unique(l.begin(), l.end()), l.end());
    
    vector<int> expected = {0, 2, 3, 5, 9, 123};
    assert(issame(l, expected));
    
    return 0;
}