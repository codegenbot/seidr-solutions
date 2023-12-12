```
#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int sum_squares(vector<float> lst) {
    int sum = 0;
    for (auto& x : lst) {
        sum += ceil(x) * ceil(x);
    }
    return sum;
}
```