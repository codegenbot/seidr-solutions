```
#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int smallest_change(vector<int> arr) {
    return accumulate(arr.begin(), arr.end(), 0, [](int a, int b){ return a + abs(b - a); });
}
```