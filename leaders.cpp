
Sure! Here's the modified code without the main function:
```
#include <iostream>
#include <vector>
using namespace std;

// Function to find leaders in a vector
vector<int> leaders(vector<int> v) {
    // Initialize current leader and result vector
    int currentLeader = INT_MIN;
    vector<int> result;

    // Iterate through the vector from right to left
    for (int i = v.size() - 1; i >= 0; i--) {
        if (v[i] >= currentLeader) {
            result.push_back(v[i]);
            currentLeader = v[i];
        }
    }

    return result;
}
```