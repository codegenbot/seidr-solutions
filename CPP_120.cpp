```
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> maximum(vector<int> arr, int k) {
    vector<int> result;
    for (int i = 0; i < k; i++) {
        int max_val = INT_MIN;
        int max_index = -1;
        for (int j = 0; j < arr.size(); j++) {
            if (arr[j] > max_val) {
                max_val = arr[j];
                max_index = j;
            }
        }
        result.push_back(max_val);
        arr.erase(arr.begin() + max_index);
    }
    return result;
}
```