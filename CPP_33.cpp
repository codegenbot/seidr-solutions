#include <vector>

vector<int> sort_third(vector<int> l) {
    sort(l.begin(), l.end(), [](const vector<int>& a, const vector<int>& b) {
        return a[2] < b[2];
    });
    return l;
}

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}