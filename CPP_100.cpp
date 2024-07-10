#include <vector>
#include <cassert>

bool issame(vector<int> a, vector<int> b);  // Function declaration

vector<int> make_a_pile(int n){
    vector<int> stones;
    stones.push_back(n);
    for(int i = 1; i < n; i++){
        if(n % 2 == 0){
            n += 2;
        } else {
            n += 1;
        }
        stones.push_back(n);
    }
    return stones;
}

bool issame(vector<int> a, vector<int> b){  // Function definition
    // Compare a and b here
    return true;
}

int main(){
    assert(issame(make_a_pile(8), {8, 10, 12, 14, 16, 18, 20, 22}));
    return 0;
}