#include <vector>

vector<int> make_a_pile(int n){
    vector<int> stones;
    int stonesInLevel = n;
    for(int i=0; i<n; i++){
        stones.push_back(stonesInLevel);
        if(n % 2 == 0){
            stonesInLevel += 2;
        } else {
            stonesInLevel += 1;
        }
    }
    return stones;
}

bool issame(vector<int> a, vector<int> b){
    vector<int> pile = make_a_pile(a.size());
    // compare the two vectors
    // return true if they are equal, otherwise false
    return a == b;
}