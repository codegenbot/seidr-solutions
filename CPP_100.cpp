#include <vector>
#include <cassert>

vector<int> make_a_pile(int n);

bool issame(vector<int> a, vector<int> b);

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

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

int main() {
    int n;
    cin >> n;
    vector<int> pile = make_a_pile(n);
    assert(issame(pile, pile));
    
    return 0;
}