```
#include <climits>
#include <vector>
using std::vector;

vector<int> pluck(vector<int> arr) {
    if (arr.empty()) return {}; // If the input array is empty, return an empty vector

    int smallestEven = INT_MAX;
    int smallestIndex = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallestEven) {
            smallestEven = arr[i];
            smallestIndex = i;
        }
    }

    return {smallestEven, smallestIndex};
}
```