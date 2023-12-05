```
#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;

vector<float> sort_even(vector<float> l) {
    vector<float> result;
    for (int i = 0; i < l.size(); i++) {
        if (i % 2 == 0) {
            result.push_back(l[i]);
        } else {
            int j = i - 1;
            while (j >= 0 && l[j] > l[i]) {
                j--;
            }
            result.insert(result.begin() + j, l[i]);
        }
    }
    return result;
}
```