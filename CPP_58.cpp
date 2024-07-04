#include <vector>
#include <algorithm>
#include <cassert>
#include <iterator>
using namespace std;

vector<int> common(vector<int> l1, vector<int> l2) {
    sort(l1.begin(), l1.end());
    sort(l2.begin(), l2.end());
    vector<int> result;
    set_intersection(l1.begin(), l1.end(), l2.begin(), l2.end(), back_inserter(result));
    result.erase(unique(result.begin(), result.end()), result.end());
    return result;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(common({4, 3, 2, 8}, {}), {}));
    assert(issame(common({1, 2, 3}, {2, 3, 4}), {2, 3}));
    assert(issame(common({1, 1, 2, 2}, {2, 2, 3, 3}), {2}));
    assert(issame(common({3, 2, 1}, {1, 1, 2, 2, 3, 3}), {1, 2, 3}));
    return 0;
}