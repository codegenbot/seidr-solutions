#include <vector>
#include <algorithm>
#include <iterator>
#include <cassert>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> common(vector<int> l1, vector<int> l2) {
    vector<int> result;
    sort(l1.begin(), l1.end());
    sort(l2.begin(), l2.end());
    set_intersection(l1.begin(), l1.end(), l2.begin(), l2.end(), back_inserter(result));
    result.erase(unique(result.begin(), result.end()), result.end());
    return result;
}

int main() {
    assert(issame(common({4, 3, 2, 8}, {}), {}));

    // Add more test cases if needed
    assert(issame(common({1, 2, 3, 4}, {3, 4, 5, 6}), {3, 4}));
    assert(issame(common({1, 2, 3}, {4, 5, 6}), {}));

    return 0;
}