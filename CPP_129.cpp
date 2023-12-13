```cpp
#include <iostream>
#include <vector>
#include <climits>
using namespace std;

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

vector<int> minPath(const vector<int>& costs, int target) {
    // Implement the function to find the minimum path
    vector<int> path;
    // Initialize the first element of the path as 0
    path.push_back(0);
    for (int i = 1; i < costs.size(); i++) {
        int minCost = INT_MAX;
        int minIndex = -1;
        for (int j = 0; j < i; j++) {
            if (costs[j] + path[j] < minCost) {
                minCost = costs[j] + path[j];
                minIndex = j;
            }
        }
        path.push_back(minCost);
    }
    return path;
}
```