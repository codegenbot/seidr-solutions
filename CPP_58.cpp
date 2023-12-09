```
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool issame(const vector<int>& a, const vector<int>& b) {
    return (a == b);
}

vector<int> common(const vector<int>& a, const vector<int>& b) {
    vector<int> result;
    set_intersection(a.begin(), a.end(), b.begin(), b.end(), back_inserter(result));
    return result;
}

int main() {
    vector<int> v1 = {4, 3, 2, 8};
    vector<int> v2 = {};

    assert(issame(common(v1, v2), {}));

    cout << "The common elements of the two vectors are: ";
    for (auto i : common(v1, v2)) {
        cout << i << " ";
    }
    return 0;
}
```