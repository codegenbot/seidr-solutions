```cpp
#include <vector>
using namespace std;

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<bool> main() {
    vector<int> a = {1,2,3,5};
    vector<int> b = {-1,2,3,4};
    int n = max(a.size(), b.size());
    vector<bool> result(n);
    for (int i = 0; i < n; i++) {
        if (i >= a.size()) {
            result[i] = (b[i] == a[0]);
        } else if (i >= b.size()) {
            result[i] = (a[i] == b[0]);
        } else {
            result[i] = (a[i] == b[i]);
        }
    }
    return result;
}