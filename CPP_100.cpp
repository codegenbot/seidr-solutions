#include <vector>

bool issame(vector<int> a, vector<int> b);

vector<int> make_a_pile(int n);

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size())
        return false;
    
    for(int i=0; i<a.size(); i++){
        if(a[i]!=b[i])
            return false;
    }

    return true;
}

vector<int> make_a_pile(int n){
    vector<int> stones;
    stones.push_back(n);
    for (int i = 1; i < n; i++) {
        if (n % 2 == 0) {
            n += 2;
        } else {
            n += 1;
        }
        stones.push_back(n);
    }
    return stones;
}

int main() {
    int n;
    cin >> n;

    vector<int> pile = make_a_pile(n);

    // print the stones in the pile
    for(int i=0; i<pile.size(); i++){
        cout << pile[i] << " ";
    }

    return 0;
}