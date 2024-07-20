#include <vector>

bool issame(vector<int> a, vector<int> b);

vector<int> make_a_pile(int n){
    vector<int> stones;
    stones.push_back(n);
    for(int i=1; i<n; i++){
        if(n%2 == 0){
            n += 2;
        } else {
            n += 1;
        }
        stones.push_back(n);
    }
    return stones;
}

int main() {
    vector<int> pile1 = make_a_pile(5);
    vector<int> pile2 = make_a_pile(5);
    if (issame(pile1, pile2)) {
        cout << "The two piles are the same" << endl;
    } else {
        cout << "The two piles are different" << endl;
    }
    return 0;
}