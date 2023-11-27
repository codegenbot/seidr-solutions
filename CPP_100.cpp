#include <vector>

bool issame(vector<int> a, vector<int> b);

vector<int> make_a_pile(int n);

int main(){
    int n;
    cin >> n;
    vector<int> levels = make_a_pile(n);

    vector<int> b(levels.begin(), levels.end());
    sort(b.begin(), b.end(), greater<int>());

    if (issame(levels, b)){
        cout << "possible" << endl;
    } else {
        cout << "impossible" << endl;
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

bool issame(vector<int> a, vector<int> b){
    return a == b;
}