#include <vector>
#include <iostream>
#include <cassert>

std::vector<int> make_a_pile(int n){
    std::vector<int> stones;
    while(n > 0){
        stones.push_back(n);
        n = (n % 2 == 0) ? n + 1 : n + 2;
    }
    return stones;
}

bool issame(const std::vector<int>& a, const std::vector<int>& b){
    return a == b;
}