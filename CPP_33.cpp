```
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> sortThird(vector<int> l) {
    vector<int> result;
    for (int i = 0; i < l.size(); i++) {
        if (i % 3 == 0) {
            result.push_back(l[i]);
        } else {
            int j = i / 3;
            while (j < l.size()) {
                if (l[j] < l[i]) {
                    result.push_back(l[j]);
                    break;
                }
                j++;
            }
        }
    }
    return result;
}
```