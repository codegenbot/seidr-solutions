```cpp
#include <vector>
#include <cassert>
#include <iostream>

using namespace std;

bool same(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

vector<int> make_a_pile(int n) {
    int stones = 0;
    vector<int> pile;
    for (int i = 0; i < n; i++) {
        if (stones % 2 == 1) {
            pile.push_back(stones);
            stones++;
        } else {
            pile.push_back(0);
            stones++;
        }
    }
    return pile;
}

int main() {
    vector<int> result = make_a_pile(8); 
    assert(same({0}, result));
    for (int i = 0; i < (int)result.size(); i++) {
        cout << result[i] << " ";
    }
    return 0;
}