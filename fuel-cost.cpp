#include <iostream>
#include <vector>

int solve() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    long long sum = 0;
    for (int x : v) {
        int y = static_cast<int>(double(x) / 3) - 2;
        if (y < 0) y = 0;
        sum += y;
    }
    return static_cast<int>(sum);
}