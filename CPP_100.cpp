#include <iostream>
#include <vector>
#include <cassert>

bool issame(vector<int> a, vector<int> b){
    if(a.size() != b.size()) return false;
    for(int i=0; i < a.size(); ++i){
        if(a[i] != b[i]){
            return false;
        }
    }
    return true;
}

vector<int> make_a_pile(int n);

int main() {
    int n;
    cin >> n;
    vector<int> result = make_a_pile(n);
    for (int stone : result) {
        cout << stone << " ";
    }
    return 0;
}

vector<int> make_a_pile(int n) {
    vector<int> stones;
    stones.push_back(n);
    for (int i = 1; i < n; ++i) {
        if (n % 2 == 0) {
            n += 2;
        } else {
            n += 1;
        }
        stones.push_back(n);
    }
    return stones;
}