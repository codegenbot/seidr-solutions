#include <vector>
#include <iostream>
#include <cassert>

using namespace std;

vector<int> make_a_pile(int n){
    vector<int> stones;
    while(n > 0){
        stones.push_back(n);
        n = (n % 2 == 0) ? n + 1 : n + 2;
    }
    return stones;
}

bool issame(const vector<int>& a, const vector<int>& b){
    return a == b;
}