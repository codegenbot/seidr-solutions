#include <vector>
#include <cassert>
using namespace std;

vector<int> make_a_pile(int n) {
    vector<int> pile;
    int current_stones = n;
    for (int i = 0; i < n; ++i) {
        pile.push_back(current_stones);
        current_stones += 2;
    }
    return pile;
}

int main() {
    vector<int> pile_a = make_a_pile(8);
    vector<int> pile_b = {8, 10, 12, 14, 16, 18, 20, 22};

    assert(pile_a == pile_b);

    return 0;
}