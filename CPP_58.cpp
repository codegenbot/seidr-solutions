#include <iostream>
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

vector<int> common(vector<int> l1, vector<int> l2) {
    vector<int> result;
    sort(l1.begin(), l1.end());
    sort(l2.begin(), l2.end());
    set_intersection(l1.begin(), l1.end(), l2.begin(), l2.end(), back_inserter(result));
    result.erase(unique(result.begin(), result.end()), result.end());
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(common({4, 3, 2, 8}, {}), {}));
    assert(issame(common({3, 5, 1, 7}, {1, 3, 6, 7}), {1, 3, 7}));
    assert(issame(common({9, 8, 7, 6}, {7, 8, 9}), {7, 8, 9}));
    assert(issame(common({1, 2, 3, 4}, {5, 6, 7}), {}));
    assert(issame(common({1, 1, 2, 3, 3}, {1, 2, 3, 4, 5}), {1, 2, 3}));
    
    return 0;
}