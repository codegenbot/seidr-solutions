```
#include <vector>
#include <iostream>
#include <cmath>

using namespace std;

vector<int> cutVector(const vector<int>& vec) {
    int n = vec.size();
    if (n == 0) return {};
    if (n == 1) return {vec[0]};
    
    int minDiff = INT_MAX;
    int spot = -1;
    for (int i = 1; i < n; i++) {
        int diff = abs(vec[i-1] - vec[i]);
        if (diff < minDiff) {
            minDiff = diff;
            spot = i;
        }
    }
    
    vector<int> result;
    for (int i = 0; i <= spot; i++) {
        result.push_back(vec[i]);
    }
    return result;
}

int main() {
    vector<int> vec = {1, 2, 3, 4, 5};
    vector<int> subVecs = cutVector(vec);
    
    for (auto v : subVecs) {
        cout << v << " ";
    }
    return 0;
}
```