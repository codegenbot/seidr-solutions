#include <vector>

vector<int> make_a_pile(int n);

bool issame(vector<int> a, vector<int> b){
    if(a == b){
        return true;
    }
    else{
        return false;
    }
}

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

int main() {
    int n;
    cin >> n;
    vector<int> pile = make_a_pile(n);
    for(auto stone : pile){
        cout << stone << " ";
    }
    return 0;
}