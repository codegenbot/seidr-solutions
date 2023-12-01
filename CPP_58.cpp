#include <iostream>
#include <vector>
#include <algorithm>

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
    vector<int> commonElements;

    sort(l1.begin(), l1.end());
    sort(l2.begin(), l2.end());

    int i = 0, j = 0;
    while (i < l1.size() && j < l2.size()) {
        if (l1[i] < l2[j]) {
            i++;
        } else if (l1[i] > l2[j]) {
            j++;
        } else {
            commonElements.push_back(l1[i]);
            i++;
            j++;
        }
    }

    commonElements.erase(unique(commonElements.begin(), commonElements.end()), commonElements.end());

    return commonElements;
}

int main() {
    assert(issame(common({4, 3, 2, 8}, {}), {}));
    assert(issame(common({}, {4, 3, 2, 8}), {}));
    assert(issame(common({4, 3, 2, 8}, {2, 6, 1, 5}), {2}));
    assert(issame(common({2, 4, 6, 8}, {4, 2, 8, 10}), {2, 4}));
    assert(issame(common({5, 6, 8}, {8, 5, 2, 6}), {5, 6, 8}));

    cout << "All test cases passed!" << endl;

    return 0;
}