```
#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> cutVector(vector<int>& v) {
    int n = v.size();
    vector<int> left, right;
    for (int i = 0; i < n; i++) {
        if (v[i] % 2 == 0) {
            left.push_back(v[i]);
        } else {
            right.push_back(v[i]);
        }
    }
    return left + right;
}
```

You can also use `vector<vector<int>>` as return type, but it's not necessary. It depends on the problem statement.