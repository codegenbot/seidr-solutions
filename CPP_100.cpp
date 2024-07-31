#include <iostream>
#include <vector>
#include <cassert>

bool issame(const vector<int>& a, const vector<int>& b){
    return a == b;
}

vector<int> make_a_pile(int n){
    vector<int> stones;
    stones.push_back(n);
    for(int i = 1; i < n; ++i){
        n = (n % 2 == 0) ? n + 1 : n + 2;
        stones.push_back(n);
    }
    return stones;
}

int main(){
    assert (issame(make_a_pile(8) , {8, 10, 12, 14, 16, 18, 20, 22}));
    return 0;
}