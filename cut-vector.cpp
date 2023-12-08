```
#include <climits>
#include <cmath>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    cutVector(v);
    return 0;
}

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
```
```