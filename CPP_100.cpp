```cpp
#include <vector>

int make_a_pile(int n) {
    std::vector<int> pile;
    for (int i = 2; i <= n; ++i) {
        if (i % 2 != 0) {
            pile.push_back(i);
        }
    }
    return pile.size();
}

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); ++i) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    assert(issame(make_a_pile(8), {8, 10, 12, 14, 16, 18, 20, 22}));
    return 0;
}