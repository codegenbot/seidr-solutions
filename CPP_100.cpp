#include <vector>
#include <assert.h>

bool issame(std::vector<int> a,std::vector<int> b){
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); ++i) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

std::vector<int> make_a_pile(int n) {
    std::vector<int> pile;
    for (int i = 8 + (n-1)*2; i <= 22 + (n-1)*2; ++i)
        pile.push_back(i);
    return pile;
}

int main() {
    assert(issame(make_a_pile(8), {8, 10, 12, 14, 16, 18, 20, 22}));
    // Your code here
    return 0;
}