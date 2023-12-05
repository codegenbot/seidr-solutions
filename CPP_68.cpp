```
#include <iostream>
#include <vector>

using namespace std;

vector<int> pluck(vector<int> arr) {
    int smallestEven = INT_MAX;
    int smallestEvenIndex = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallestEven) {
            smallestEven = arr[i];
            smallestEvenIndex = i;
        }
    }

    if (smallestEvenIndex != -1) {
        return vector<int>{smallestEven, smallestEvenIndex};
    } else {
        return vector<int>();
    }
}
```