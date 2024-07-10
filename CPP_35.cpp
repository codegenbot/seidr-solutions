```cpp
#include <algorithm>
using namespace std;

int find_max_value(vector<int> l) {
    return *max_element(l.begin(), l.end());
}