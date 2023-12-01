#include <vector>

using namespace std;

vector<int> make_a_pile(int n){
    vector<int> stones;
    int numStones = n;
    stones.push_back(numStones);
    
    for(int i = 1; i < n; i++){
        if(n % 2 == 0){
            numStones += 2;
        }else{
            numStones += 1;
        }
        stones.push_back(numStones);
    }
    
    return stones;
}

bool issame(vector<int> a, vector<int> b){
    // Implementation of issame function
    // Compare if vector a and vector b are the same
    if (a.size() != b.size())
        return false;
        
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i])
            return false;
    }
    
    return true;
}

int main() {
    assert (issame(make_a_pile(8), {8, 10, 12, 14, 16, 18, 20, 22}));
    
    return 0;
}