Here is the completed code:

```cpp
#include<stdio.h>
#include<vector>
#include<algorithm>
using namespace std;

vector<int> common(vector<int> l1, vector<int> l2) {
    set<int> s1(l1.begin(), l1.end());
    set<int> s2(l2.begin(), l2.end());

    set<int> result;
    for (int x : s1) {
        if (s2.count(x)) {
            result.insert(x);
        }
    }

    return vector<int>(result.begin(), result.end());
}