#include <vector>

vector<int> make_a_pile(int n){
    vector<int> stones;
    int stonesInLevel = n;
    for(int i = 0; i < n; i++){
        stones.push_back(stonesInLevel);
        stonesInLevel += (n % 2 == 0) ? 2 : 1;
    }
    return stones;
}

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()){
        return false;
    }
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

int main(){
    assert(make_a_pile(8) == vector<int>{8, 10, 12, 14, 16, 18, 20, 22});
    return 0;
}