#include <vector>
#include <initializer_list>

using namespace std;

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

vector<int> make_a_pile(int n) {
    vector<int> pile = {0, 1};
    for (int i = 2; i <= n; ++i)
        pile.insert(pile.begin(), i);
    return pile;
}

int main() {
    vector<int> pile = make_a_pile(8);
    assert(issame(pile, vector<int>({8, 10, 12, 14, 16, 18, 20, 22})));
    return 0;
}