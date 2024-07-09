```cpp
#include <algorithm>
#include <vector>
using namespace std;

int findMax(vector<int> l) {
    return *std::max_element(l.begin(), l.end());
}