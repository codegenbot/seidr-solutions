#include <vector>
#include <cassert>

vector<int> make_a_pile(int n) {
    vector<int> stones;
    stones.push_back(n);
    for(int i = 1; i < n; i++){
        n = (n % 2 == 0) ? n + 1 : n + 2;
        stones.push_back(n);
    }
    return stones;
}

bool issame(vector<int> a, vector<int> b) {
    if(a.size() != b.size()) return false;
    for(size_t i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}