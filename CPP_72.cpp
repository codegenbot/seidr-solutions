```
#include <iostream>
#include <vector>

using namespace std;

bool will_it_fly(vector<int> q, int w) {
    bool isBalanced = true;
    for (int i = 0; i < q.size() / 2; i++) {
        if (q[i] != q[q.size() - i - 1]) {
            isBalanced = false;
            break;
        }
    }
    return isBalanced && accumulate(q.begin(), q.end(), 0) <= w;
}
```