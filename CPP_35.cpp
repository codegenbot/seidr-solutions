```cpp
#include <algorithm>
using namespace std;

int findMax(vector<int> l) {
    return *max_element(l.begin(), l.end());
}