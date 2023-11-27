#include <vector>

vector<int> make_a_pile(int n);

bool issame(vector<int> a, vector<int> b);

int main() {
    int n;
    cin >> n;
    vector<int> stones = make_a_pile(n);
    vector<int> stonesCopy = stones;
    if (issame(stones, stonesCopy)) {
        cout << "Same";
    } else {
        cout << "Different";
    }
    return 0;
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

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}