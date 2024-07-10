#include <vector>
using namespace std;

bool sameVectors(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> make_a_pile(int n) {
    vector<int> pile;
    for (int i = 2 * n; i >= n; --i)
        pile.push_back(i);
    return pile;
}