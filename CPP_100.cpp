#include <vector>
#include <cassert>

using namespace std;

vector<int> make_a_pile(int n) {
    vector<int> pile;
    pile.push_back(n);
    for (int i = 1; i < n; i++) {
        if (i % 2 == 0) {
            pile.push_back(n + 2 * i);
        } else {
            pile.push_back(n + 2 * i - 1);
        }
    }
    return pile;
}