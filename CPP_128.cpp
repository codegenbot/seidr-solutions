Here is the completed code:

```cpp
#include<stdio.h>
#include<math.h>
#include<vector>
using namespace std;

int prod_signs(vector<int> arr) {
    if (arr.empty()) return -32768;
    int productSign = 1;
    for (int num : arr) {
        productSign *= (num > 0 ? 1 : (num < 0 ? -1 : 0));
    }
    long long sumMagnitude = 0;
    for (int num : arr) {
        sumMagnitude += abs(num);
    }
    return productSign * sumMagnitude;
}