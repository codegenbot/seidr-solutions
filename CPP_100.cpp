#include <vector>
#include <cassert>

using namespace std;

bool same(vector<int> a, vector<int> b) { 
    return a == b;
}

vector<int> make_a_pile(int n) {
    vector<int> pile;
    int stones = n;
    while (stones > 0) {
        pile.push_back(stones);
        if (n % 2 == 1) {
            n++;
            stones = n;
        } else {
            n++;
            stones = n;
        }
    }
    return pile;
}

int main() {
    assert(make_a_pile(8) == vector<int>({8, 10, 12, 14, 16, 18, 20, 22}));
    return 0;
}