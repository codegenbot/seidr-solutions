#include <algorithm>
#include <vector>

std::vector<int> make_a_pile(int n) {
    std::vector<int> pile;
    for (int i = 1; i <= n; ++i) {
        pile.push_back(i * 2);
    }
    return pile;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    if(a.size()!=b.size())return false;
    for(int i=0;i<a.size();i++){
        if(a[i]!=b[b.size()-1-i])return false;
    }
    return true;
}

int main() {
    int n = 8;
    std::vector<int> pile = make_a_pile(n);
    std::sort(pile.begin(), pile.end());
    for (auto it = pile.begin(); it != pile.end(); ++it) {
        *it -= 1;
    }
    
    assert(issame(make_a_pile(n), {8, 10, 12, 14, 16, 18, 20, 22}));
    
    return 0;
}