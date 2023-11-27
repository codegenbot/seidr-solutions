#include <vector>
#include <algorithm>
#include <iterator>

bool issame(vector<int> a, vector<int> b) {
    vector<int> result;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    set_intersection(a.begin(), a.end(), b.begin(), b.end(), back_inserter(result));
    result.erase(unique(result.begin(), result.end()), result.end());
    return result.empty();
}

int main() {
    assert(issame(common({4, 3, 2, 8}, {}), {}));
    return 0;
}