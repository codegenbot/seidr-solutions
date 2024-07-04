#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> common(vector<int> l1, vector<int> l2) {
    sort(l1.begin(), l1.end());
    sort(l2.begin(), l2.end());
    vector<int> result;
    set_intersection(l1.begin(), l1.end(), l2.begin(), l2.end(), back_inserter(result));
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(common({4, 3, 2, 8}, {}), {}));
    assert(issame(common({4, 3, 2, 8}, {3, 8}), {3, 8}));
    assert(issame(common({1, 2, 3}, {4, 5, 6}), {}));
    assert(issame(common({4, 4, 2, 2}, {2, 2, 2}), {2}));

    cout << "All tests passed!" << endl;
    return 0;
}