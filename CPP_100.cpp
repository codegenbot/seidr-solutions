#include <vector>
#include <cassert>

bool issame(vector<int> a, vector<int> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    assert(make_a_pile(8).size() == 8); 
    return 0;
}