```
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int search(vector<int> lst) {
    int max_freq = -1;
    int result = -1;
    for (int i = 0; i < lst.size(); i++) {
        if (lst[i] > max_freq) {
            max_freq = lst[i];
            result = i;
        }
    }
    return result;
}
```