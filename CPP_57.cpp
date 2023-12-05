```
#include <iostream>
#include <vector>

using namespace std;

bool monotonic(vector<float> l) {
    int n = l.size();
    if (n <= 1) return true;

    bool increasing = l[0] < l[1];
    for (int i = 2; i < n; i++) {
        if ((l[i-1] < l[i]) != increasing) {
            return false;
        }
    }

    return true;
}
```