#include <vector>

bool issame(vector<int> a, vector<int> b) {
    // implementation of issame function
    // return true if a and b are the same, otherwise return false
    return a == b;
}

vector<int> make_a_pile(vector<int> stones) {
    // implementation of make_a_pile function
    // sort the stones in non-decreasing order
    sort(stones.begin(), stones.end());
    return stones;
}

vector<int> solve(int n) {
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