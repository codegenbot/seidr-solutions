#include <vector>
#include <algorithm>
#include <set>

using namespace std;

vector<int> common(vector<int> l1, vector<int> l2) {
    vector<int> result;
    sort(l1.begin(), l1.end());
    sort(l2.begin(), l2.end());
    set_intersection(l1.begin(), l1.end(), l2.begin(), l2.end(), back_inserter(result));
    auto last = unique(result.begin(), result.end());
    result.erase(last, result.end());
    return result;
}

bool issame(vector<int> a, vector<int> b){
    return a == b;
}

int main() {
    assert(issame(common({4, 3, 2, 8}, {}), {}));
    assert(issame(common({1, 2, 3, 4}, {3, 4, 5, 6}), {3, 4}));
    assert(issame(common({1, 2, 3, 4, 4, 5}, {3, 4, 4, 5, 6}), {3, 4, 4, 5}));
    assert(issame(common({1, 2, 3, 4, 5}, {6, 7, 8, 9}), {}));
    assert(issame(common({4, 2, 3, 1}, {}), {}));
    assert(issame(common({}, {4, 3, 2, 1}), {}));
    assert(issame(common({}, {}), {}));
    return 0;
}