#include <vector>

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

vector<int> make_a_pile(int n);

int main() {
    int n;
    cin >> n;
    vector<int> stones = make_a_pile(n);
    vector<int> b;
    cin >> b;
    if(issame(stones, b)){
        cout << "Same";
    } else {
        cout << "Not Same";
    }
    return 0;
}

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