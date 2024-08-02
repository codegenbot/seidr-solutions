```cpp
#include <vector>
#include <algorithm>

int main() {
    bool same(vector<int> a, vector<int> b) {
        return a == b;
    }
    vector<int> unique(vector<int> l) {
        vector<int> result = l;
        sort(result.begin(), result.end());
        result.erase(unique(result.begin(), result.end()), result.end());
        return result;
    }
    assert(same(unique({5, 3, 5, 2, 3, 3, 9, 0, 123}) , {0, 2, 3, 5,9, 123}));
    return 0;
}