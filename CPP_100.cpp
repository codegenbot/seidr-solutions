#include <vector>
#include <cassert>

using namespace std;

vector<int> make_a_pile(int n, int start=8, int step=2) {
    if (n == 0) {
        return {};
    }
    vector<int> pile = make_a_pile(n - 1, start, step);
    pile.push_back(start + (n - 1) * step);
    return pile;
}