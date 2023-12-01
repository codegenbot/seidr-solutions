#include <vector>
#include <cassert>

std::vector<int> make_a_pile(int n){
    std::vector<int> piles;
    int stones = n;
    int increment = (n % 2 == 0) ? 2 : 1;
    for(int i = 0; i < n; i++){
        piles.push_back(stones);
        stones += increment;
    }
    return piles;
}

bool issame(const std::vector<int>& a,const std::vector<int>& b){
    return a == b;
}

int main() {
    assert(issame(make_a_pile(8), {8, 10, 12, 14, 16, 18, 20, 22}));
    return 0;
}