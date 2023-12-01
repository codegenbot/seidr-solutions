#include <vector>
#include <cassert>

using namespace std;

bool isSame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

vector<int> make_a_pile(int n) {
    vector<int> piles = {};
    int stones = n;
    for (int i = 0; i < n; i++) {
        piles.push_back(stones);
        if (i % 2 == 0) {
            stones += 2;
        } else {
            stones += 1;
        }
    }
    return piles;
}

int main() {
    assert(isSame(make_a_pile(8), {8, 10, 12, 14, 16, 18, 20, 22}));
    return 0;
}