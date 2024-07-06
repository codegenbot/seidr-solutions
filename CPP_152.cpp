#include <vector>
#include <cassert>

bool issame(vector<int> a, vector<int> b) {
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    assert(compare({1,2,3,5},{-1,2,3,4}) == ({2,0,0,1})); 
    return 0;
}