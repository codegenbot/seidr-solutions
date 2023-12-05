```
#include<iostream>
#include<vector>
using namespace std;

int search(vector<int> lst) {
    int max_freq = -1;
    int max_value = -1;

    for (int i = 0; i < lst.size(); i++) {
        if (lst[i] > 0 && lst[i] >= max_freq) {
            max_freq = lst[i];
            max_value = i;
        }
    }

    return max_value;
}
```