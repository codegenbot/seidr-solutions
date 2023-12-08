```
#include <iostream>
#include <vector>

using namespace std;

vector<int> cutVector(vector<int> v) {
    int n = v.size();
    if (n == 1) return vector<int>{v[0], 0};
    int minDiff = INT_MAX;
    int spot = -1;
    for (int i = 1; i < n; i++) {
        int diff = std::abs(v[i] - v[i-1]);
        if (diff < minDiff) {
            minDiff = diff;
            spot = i;
        }
    }
    return vector<int>{v[spot], v[spot+1]};
}

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    auto result = cutVector(v);
    cout << "The two resulting subvectors are: ";
    for (auto x : result) {
        cout << x << ", ";
    }
    return 0;
}
```