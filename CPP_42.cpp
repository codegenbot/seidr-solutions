```
#include <iostream>
#include <vector>

using namespace std;

vector<int> incr_list(vector<int> l) {
    for (int i = 0; i < l.size(); i++) {
        l[i]++;
    }
    return l;
}
```