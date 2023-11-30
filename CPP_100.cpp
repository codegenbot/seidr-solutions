#include <vector>
#include <cassert>

vector<int> make_a_pile(int n){
    vector<int> stones;
    int level = n;
    for(int i=0; i<n; i++){
        stones.push_back(level);
        level += (n % 2 == 0) ? 2 : 1;
    }
    return stones;
}

vector<int> make_a_pile(int n); // forward declaration

bool issame(vector<int> a, vector<int> b){
    // function implementation
}