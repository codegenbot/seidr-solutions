```
#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

vector<float> derivative(vector<float> xs) {
    vector<float> result;
    for (int i = 1; i < xs.size(); i++) {
        result.push_back(xs[i] * pow(i, i - 1));
    }
    return result;
}
```