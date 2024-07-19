#include <vector>

bool issame(vector<int> a, vector<int> b) {
    sort(a.begin(), a.end());
    a.erase(unique(a.begin(), a.end()), a.end());

    sort(b.begin(), b.end());
    b.erase(unique(b.begin(), b.end()), b.end());

    return (a == b);
}