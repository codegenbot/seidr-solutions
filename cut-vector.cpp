```
#include <vector>
#include <iostream>
using namespace std;

vector<int> cutVector(vector<int>& input) {
    int n = input.size();
    vector<int> left, right;
    int minDiff = INT_MAX;
    for (int i = 1; i < n - 1; i++) {
        int diff = abs(input[i] - input[i - 1]);
        if (diff < minDiff) {
            minDiff = diff;
            left.clear();
            right.clear();
            for (int j = 0; j < i; j++) {
                left.push_back(input[j]);
            }
            for (int j = i + 1; j < n; j++) {
                right.push_back(input[j]);
            }
        }
    }
    return {left, right};
}
```