#include <iostream>
#include <vector>
#include <algorithm>
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
    // additional test cases
    assert(issame(common({1, 1, 2, 2, 3, 3}, {2, 2, 3, 3, 4, 4}), {2, 3}));
    assert(issame(common({5, 5, 6, 6, 7, 7}, {6, 6, 7, 7, 8, 8}), {6, 7}));
    assert(issame(common({1, 2, 3, 4, 5}, {6, 7, 8, 9, 10}), {}));
    assert(issame(common({}, {}), {}));
    
    return 0;
}