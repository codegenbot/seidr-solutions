#include <vector>
#include <cassert>

using namespace std;

vector<int> make_a_pile(int n) {
    vector<int> pile;
    int current = n;
    for(int i = 0; i < n; ++i) {
        pile.push_back(current);
        current += 2;
    }
    return pile;
}

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(make_a_pile(8), vector<int>({8, 10, 12, 14, 16, 18, 20, 22})));
    return 0;
}