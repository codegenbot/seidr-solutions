#include <iostream>
#include <vector>

bool issame(const vector<int>& a, const vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> v1 = {5, 2, 5, 2, 3, 3, 9, 0, 123};
    vector<int> v2 = incr_list(v1);
    assert(issame(v2, {6, 3, 6, 3, 4, 4, 10, 1, 124}));
    return 0;
}