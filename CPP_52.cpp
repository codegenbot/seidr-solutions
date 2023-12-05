```
#include <iostream>
#include <vector>
using namespace std;

bool belowThreshold(vector<int> l, int t) {
    for (int i = 0; i < l.size(); i++) {
        if (l[i] > t) {
            return false;
        }
    }
    return true;
}
```
