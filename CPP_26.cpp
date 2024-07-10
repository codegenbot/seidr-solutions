#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    a.erase(unique(a.begin(), a.end()), a.end());
    b.erase(unique(b.begin(), b.end()), b.end());
    return a == b;
}

int main() {
    assert(issame({1, 2, 3, 2, 4, 3, 5}, {1, 4, 5}));
    
    return 0;
}