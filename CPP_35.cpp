```cpp
#include <algorithm>
using namespace std;

int findMax(int l[]) {
    vector<int> v(l, l + sizeof(l)/sizeof(l[0]));
    return *max_element(v.begin(), v.end());
}