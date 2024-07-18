#include <vector>
#include <algorithm>
#include <cassert>

bool issame(vector<int> a, vector<int> b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return a == b;
}

int main() {
    vector<int> common({4, 3, 2, 8});
    vector<int> empty;
    
    assert(issame(common, empty));
    
    return 0;
}