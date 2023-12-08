```
#include <climits>
#include <cmath>
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> v{1, 2, 3};
    auto result = cutVector(v);
    cout << "Subvector 1: ";
    for (auto x : result[0]) {
        cout << x << " ";
    }
    cout << endl;
    cout << "Subvector 2: ";
    for (auto x : result[1]) {
        cout << x << " ";
    }
    return 0;
}
```