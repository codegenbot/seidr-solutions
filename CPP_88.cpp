#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    
    return a == b;
}

int main() {
    assert(issame({21, 14, 23, 11}, {23, 21, 14, 11}));
    
    return 0;
}