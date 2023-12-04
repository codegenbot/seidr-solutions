```
#include <vector>
#include <iostream>
using namespace std;

vector<int> cutVector(const vector<int>& v) {
    int n = v.size();
    if (n == 0) return {};
    if (n == 1) return {v[0]};
    
    int minDiff = INT_MAX;
    int spot = -1;
    for (int i = 1; i < n; i++) {
        int diff = abs(v[i] - v[i-1]);
        if (diff < minDiff) {
            minDiff = diff;
            spot = i;
        }
    }
    
    vector<int> left, right;
    for (int i = 0; i < spot; i++) {
        left.push_back(v[i]);
    }
    for (int i = spot; i < n; i++) {
        right.push_back(v[i]);
    }
    
    return {left, right};
}

int main() {
    vector<int> v = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    auto result = cutVector(v);
    for (auto& sub : result) {
        cout << "Subvector: ";
        for (int i : sub) {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
```