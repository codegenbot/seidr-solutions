#include <vector>

bool issame(vector<int> a, vector<int> b){
    // Your implementation here
}

vector<int> make_a_pile(int n){
    vector<int> stones;
    stones.reserve(n);
    
    for(int i = 0; i < n; i++){
        if(n % 2 == 0){
            stones.push_back(n + 2 * i);
        } else {
            stones.push_back(n + 2 * i - 1);
        }
    }
    
    return stones;
}