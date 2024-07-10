```
#include <vector>
#include <assert.h>

std::vector<int> make_a_pile(int n) {
    std::vector<int> pile;
    int stones = n;
    
    while(stones > 0) {
        pile.push_back(stones);
        if (stones % 2 == 1) {
            stones = stones + 1;
        } else {
            stones = stones + 2;
        }
    }
    
    return pile;
}

bool issame(std::vector<int> a, std::vector<int> b) {
    if(a.size()!=b.size()) return false;
    for(int i=0;i<a.size();i++){
        if(a[i]!=b[i])return false;
    }
    return true;
}

int main() {
    int n = 10;
    std::vector<int> pile = make_a_pile(n);
    std::vector<int> expected = {1,3,5,7,9};
    assert(issame(pile,expected));
    return 0;
}