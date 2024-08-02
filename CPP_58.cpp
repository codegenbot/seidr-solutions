#include <set>
#include <algorithm>
#include <vector>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> common(vector<int> l1, vector<int> l2) {
    set<int> s1(l1.begin(), l1.end());
    set<int> s2(l2.begin(), l2.end());

    set<int> common;
    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),
        inserter(common, common.begin()));

    return vector<int>(common.begin(), common.end());
}

int main() {
    vector<int> l1 = {4, 3, 2, 8};
    vector<int> l2 = {};

    assert(common(l1, l2) == {});
    return 0;
}