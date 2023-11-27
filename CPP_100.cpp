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
    vector<int> pile_a = make_a_pile(a.back());
    vector<int> pile_b = make_a_pile(b.back());
    
    if (pile_a.size() != pile_b.size()) {
        return false;
    }
    
    for (int i = 0; i < pile_a.size(); i++) {
        if (pile_a[i] != pile_b[i]) {
            return false;
        }
    }
    
    return true;
}