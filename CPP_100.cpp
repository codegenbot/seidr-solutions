```
#include <iostream>
#include <vector>
#include <cassert>

using namespace std;

bool same_vectors(const vector<int>& a, const vector<int>& b);

vector<int> make_a_pile(int n) {
    vector<int> pile;
    for (int i = 1; i <= n; ++i) {
        pile.push_back(i * 2 - 1);
    }
    return pile;
}

bool same_vectors(const vector<int>& a, const vector<int>& b) {
    return a.size() == b.size() && equal(a.begin(), a.end(), b.begin());
}

bool vectorComparison(const vector<int>& a, const initializer_list<int> b) {
    return same_vectors(a, vector<int>(b));
}

int main() {
    assert(vectorComparison(make_a_pile(8), {1, 3, 5, 7, 9, 11, 13, 15}) == true);
    cout << "Hello from main!" << endl;
    return 0;
}