```
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> strange_sort_list(vector<int> lst) {
    vector<int> result;
    while (!lst.empty()) {
        int min = *min_element(lst.begin(), lst.end());
        result.push_back(min);
        lst.erase(remove(lst.begin(), lst.end(), min), lst.end());

        if (!lst.empty()) {
            int max = *max_element(lst.begin(), lst.end());
            result.push_back(max);
            lst.erase(remove(lst.begin(), lst.end(), max), lst.end());
        }
    }
    return result;
}
```