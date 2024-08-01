#include <algorithm>
#include <cmath>

int main() {
    int n;
    cin >> n;
    vector<int> l(n);
    for (auto &x : l) cin >> x;
    auto max_val = *max_element(l.begin(), l.end()); return max_val;
}