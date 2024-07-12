```
#include <vector>
#include <cassert>
#include <initializer_list>

using namespace std;

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

vector<int> make_a_pile(int n) {
    int stones = n;
    vector<int> pile;
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
    vector<int> make_a_pile_result = {8, 10, 12, 14, 16, 18, 20, 22};
    assert(issame(make_a_pile(8), make_a_pile_result));
    return 0;
}