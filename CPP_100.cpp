#include <vector>

using namespace std;

vector<int> make_a_pile(int n) {
    vector<int> pile;
    int stones = n;
    for (int i = 0; i < n; i++) {
        if ((stones % 2) == 1) {
            pile.push_back(stones);
        } else {
            pile.push_back(stones + 1);
        }
        stones += (stones % 2) ? 1 : 2;
    }
    return pile;
}