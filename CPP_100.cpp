#include <vector>

vector<int> make_a_pile(int n);

bool issame(vector<int> a, vector<int> b);

int main() {
    int n;
    cin >> n;
    vector<int> stones = make_a_pile(n);
    vector<int> b;
    for(int i=0; i<n; i++) {
        int stone;
        cin >> stone;
        b.push_back(stone);
    }
    if(issame(stones, b)){
        cout << "SAME";
    } else {
        cout << "DIFFERENT";
    }
}

vector<int> make_a_pile(int n) {
    vector<int> stones;
    int stonesInLevel = n;
    for(int i=0; i<n; i++) {
        stones.push_back(stonesInLevel);
        if(n % 2 == 0) {
            stonesInLevel += 2;
        } else {
            stonesInLevel += 1;
        }
    }
    return stones;
}

bool issame(vector<int> a, vector<int> b) {
    if(a.size() != b.size()){
        return false;
    }
    for(int i=0; i<a.size(); i++){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}