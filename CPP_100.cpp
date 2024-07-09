```cpp
#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); ++i) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

int make_a_pile(int n) {
    vector<int> pile;
    for (int i = n*2; i >= n; --i)
        pile.push_back(i);
    return 0;
}

int main() {
    assert(issame(make_a_pile(8), {8, 10, 12, 14, 16, 18, 20, 22}));
    return 0;
}