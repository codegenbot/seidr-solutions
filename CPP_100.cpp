```cpp
#include <vector>
#include <algorithm>

bool issame(std::vector<int> a,std::vector<int>b){
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); ++i) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> make_a_pile(int n) {
    std::vector<int> pile;
    for (int i = 2 * n; i > 0; --i) {
        pile.push_back(i);
    }
    return pile;
}

int main() {
    assert(issame(make_a_pile(8), {8,7,6,5,4,3,2,1}));
    return 0;
}