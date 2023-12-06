
```
#include <iostream>
#include <vector>
using namespace std;
vector<int> get_row(vector<int> lst, int x) {
    vector<int> result;
    for (int i = 0; i < lst.size(); i++) {
        if (lst[i] == x) {
            result.push_back(i);
        }
    }
    return result;
}
```