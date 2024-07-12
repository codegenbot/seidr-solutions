```cpp
#include <vector>

bool issame(vector<int> a, vector<int>b) {
    return a == b;
}

vector<int> make_a_pile(int n) {
    vector<int> pile;
    int stones = n;
    for (int i = 0; i < n; i++) {
        if (stones % 2 == 1) {
            pile.push_back(stones);
            stones += 2;
        } else {
            pile.push_back(stones);
            stones += 1;
        }
    }
    return pile;
}

int main() {
    assert (issame(make_a_pile(8) , vector<int>{8, 10, 12, 14, 16, 18, 20, 22}));
}