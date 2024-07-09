#include <vector>
#include <cassert>

vector<int> make_a_pile(int n) {
    vector<int> stones;
    for(int i = 0; i < n; i++){
        stones.push_back(n + 2*i);
    }
    return stones;
}

bool issame(vector<int> a, vector<int> b){
    return a == b;
}