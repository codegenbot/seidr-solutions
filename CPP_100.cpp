```cpp
#include <vector>

bool issame(vector<int> a, vector<int> b);

vector<int> make_a_pile(int n) {
    vector<int> pile;
    int stones = 1;
    for (int i = 0; i < n; i++) {
        if ((n % 2) == 1) { 
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
    bool issame(vector<int> a, vector<int> b) {
        return a == b;
    }

    int n; cin >> n;
    vector<int> result = make_a_pile(n);
    // Your logic here
    return 0;
}