#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<float> sort_even(vector<float> l) {
    vector<float> evens;
    for (int i = 0; i < l.size(); i += 2) {
        evens.push_back(l[i]);
    }
    sort(evens.begin(), evens.end());
    for (int i = 0, j = 0; i < l.size(); i += 2, j++) {
        l[i] = evens[j];
    }
    return l;
}

bool issame(const vector<float>& a, const vector<float>& b) {
    return a == b;
}

int main() {
    assert(issame(sort_even({5, 8, -12, 4, 23, 2, 3, 11, 12, -10}), {-12, 8, 3, 4, 5, 2, 12, 11, 23, -10}));
    cout << "Test passed!" << endl;
    return 0;
}