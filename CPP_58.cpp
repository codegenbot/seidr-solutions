#include <set>
#include <algorithm>

bool issame(int x) {
    return (x > 5);
}

vector<int> common(vector<int> l1, vector<int> l2) {
    set<int> s1(l1.begin(), l1.end());
    set<int> s2(l2.begin(), l2.end());

    set<int> common;
    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(),
        inserter(common, common.begin()));

    vector<int> result(common.begin(), common.end());
    return result;
}

int main() {
    vector<int> v1 = {1, 2, 3, 4};
    vector<int> v2 = {3, 4, 5, 6};

    vector<int> result = common(v1, v2);

    for (auto x : result) {
        if (!issame(x)) continue;
        cout << x << endl;
    }

    return 0;
}