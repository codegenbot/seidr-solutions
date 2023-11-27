#include <vector>

vector<int> make_a_pile(int n);

bool issame(vector<int> a, vector<int> b);

int main() {
    int n;
    cin >> n;
    vector<int> levels = make_a_pile(n);
    vector<int> stones;
    for(auto level : levels) {
        stones.push_back(level * level);
    }
    vector<int> sorted_stones = stones;
    sort(sorted_stones.begin(), sorted_stones.end());
    if(issame(stones, sorted_stones)) {
        cout << "Same" << endl;
    } else {
        cout << "Different" << endl;
    }
    return 0;
}

vector<int> make_a_pile(int n){
    vector<int> levels;
    int stones = n;
    levels.push_back(stones);
    for(int i=1; i<n; i++){
        if(n%2 == 0){
            stones += 2;
        } else {
            stones += 1;
        }
        levels.push_back(stones);
    }
    return levels;
}

bool issame(vector<int> a, vector<int> b) {
    if(a.size() != b.size()) {
        return false;
    }
    for(int i=0; i<a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}