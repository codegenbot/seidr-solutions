```cpp
#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> get_row(vector<vector<int>> lst, int x) {
    vector<vector<int>> result;
    for (const auto& v : lst) {
        if (v[0] == x) {
            result.push_back({i, j});
        }
    }
    return result;
}
```