Here is the completed code:

```cpp
#include <vector>
#include <algorithm>

using namespace std;

bool will_it_fly(vector<int> q, int w) {
    vector<int> rev = q;
    reverse(rev.begin(), rev.end());
    if (q != rev)
        return false; // not balanced
    
    int sum = 0;
    for (int i : q) {
        sum += i;
    }
    
    return sum <= w;
}