#include <algorithm>
#include <cmath>

int solve(int n) {
    int l[n];
    for (int i = 0; i < n; i++) {
        cin >> l[i];
    }
    return *max_element(l, l + n);
}