#include <vector>
#include <iostream>

using namespace std;

bool issame(vector<int> a,vector<int>b){
    return (a == b);
}

vector<int> make_a_pile(int n) {
    vector<int> pile;
    int stones = 1;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            stones += 2;
        } else {
            stones += 1;
        }
        pile.push_back(stones);
    }
    return pile;
}

int main() {
    assert (issame(make_a_pile(8) , vector<int>({8, 10, 12, 14, 16, 18, 20, 22})));
    return 0;
}