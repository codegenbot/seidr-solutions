#include <vector>
#include <algorithm>
#include <iterator>

bool is_same(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> common(vector<int> l1, vector<int> l2) {
    vector<int> result;
    sort(l1.begin(), l1.end());
    sort(l2.begin(), l2.end());
    set_intersection(l1.begin(), l1.end(), l2.begin(), l2.end(), back_inserter(result));
    auto last = unique(result.begin(), result.end());
    result.erase(last, result.end());
    return result;
}

int main() {
    assert(is_same(common({4, 3, 2, 8}, {}), {}));
    return 0;
}