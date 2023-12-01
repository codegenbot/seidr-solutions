#include <vector>
#include <algorithm>
#include <iterator>
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

int main() {
    assert (issame(common({4, 3, 2, 8}, {}), {}));
    assert (issame(common({1, 2, 3}, {1, 2, 3}), {1, 2, 3}));
    assert (issame(common({1, 2, 3}, {4, 5, 6}), {}));
    assert (issame(common({1, 2, 3}, {3, 4, 5}), {3}));
    assert (issame(common({}, {}), {}));
    
    return 0;
}