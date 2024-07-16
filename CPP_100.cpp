```cpp
#include <vector>
#include <cassert>

bool issame(vector<int> a, vector<int> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

vector<int> make_a_pile(int n) {
    vector<int> pile;
    int stones = n;
    while (stones > 0) {
        pile.push_back(stones);
        if(n % 2 == 1) {
            n++;
            stones = n;
        } else {
            n += 2;
            stones = n;
        }
    }
    return pile;
}

int main() {
    assert(std::equal(make_a_pile(8).begin(), make_a_pile(8).end(), {8, 10, 12, 14, 16, 18, 20, 22}.begin()));
}