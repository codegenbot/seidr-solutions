```cpp
#include <vector>
#include <algorithm>

bool isEqual(vector<int> a, vector<int> b) {
    return a.size() == b.size() && equal(a.begin(), a.end(), b.begin());
}

// Rest of the code remains the same