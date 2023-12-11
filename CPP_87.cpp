```cpp
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> get_row(vector<vector<int>> lst, int x) {
    vector<vector<int>> result;
    for (int i = 0; i < lst.size(); i++) {
        for (int j = 0; j < lst[i].size(); j++) {
            if (lst[i][j] == x) {
                result.push_back({i, j});
            }
        }
    }
    return result;
}
```

This code is correct and should work as expected. The error message you mentioned is not present in the code snippet you provided, so it's likely that the issue was resolved by fixing a different part of the code.