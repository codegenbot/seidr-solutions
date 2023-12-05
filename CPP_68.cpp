```
#include <iostream>
#include <vector>

using namespace std;

vector<int> pluck(vector<int> arr) {
    int smallestEven = -1;
    int smallestIndex = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && (smallestEven == -1 || arr[i] < smallestEven)) {
            smallestEven = arr[i];
            smallestIndex = i;
        }
    }

    return {smallestEven, smallestIndex};
}
```