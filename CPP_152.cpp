```cpp
#include <vector>
#include <algorithm>
#include <cassert>

using namespace std;

pair<size_t, size_t> compare(vector<int> a, vector<int> b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    return {count(a.begin(), a.end(), 2), count(b.begin(), b.end(), -1)};
}

int main() {
    assert(compare({1,2,3,5},{-1,2,3,4})==make_pair(2,0));
    return 0;
}