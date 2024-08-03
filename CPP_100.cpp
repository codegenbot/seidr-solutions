#include <vector>
#include <iostream>
#include <cassert>

bool is_same(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> make_a_pile(int n){
    std::vector<int> stones;
    for(int i = 0; i < n; ++i){
        stones.push_back(n + 2 * i);
    }
    return stones;
}

int main(){
    assert(is_same(make_a_pile(8), {8, 10, 12, 14, 16, 18, 20, 22}));
    return 0;
}