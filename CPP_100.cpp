#include <vector>
#include <iostream>
#include <cassert>

bool issame(std::vector<int> a, std::vector<int> b){
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
    int n;
    std::cin >> n;

    assert(issame(make_a_pile(n), std::vector<int>({n, n+2, n+4, n+6, n+8, n+10, n+12, n+14})));

    return 0;
}