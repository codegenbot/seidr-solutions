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
}

int main() {
    assert (issame(make_a_pile(8), {8, 10, 12, 14, 16, 18, 20, 22}));
    
    return 0;
}