#include <vector>

bool issame(vector<int> a, vector<int> b){
    // implementation for issame function goes here
}

vector<int> make_a_pile(int n) {
    vector<int> stones;
    stones.push_back(n);
    for(int i=1; i<n; i++){
        if(n%2 == 0){
            stones.push_back(n+2*i);
        } else {
            stones.push_back(n+2*i-1);
        }
    }
    return stones;
}