```
#include <vector>
using namespace std;

bool issame(const vector<int>& a, const vector<int>& b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> pluck(const vector<int>& arr) {
    int smallestEven = INT_MAX;
    int smallestIndex = -1;

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] % 2 == 0 && arr[i] < smallestEven) {
            smallestEven = arr[i];
            smallestIndex = i;
        }
    }

    return {smallestEven, smallestIndex};
}

int main() {
    vector<int> a = {1, 2, 3, 4, 5};
    vector<int> b = {1, 2, 3, 4, 5};
    assert(issame(a, b));
    return 0;
}
```