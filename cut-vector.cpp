```
#include <iostream>
#include <vector>
using namespace std;
int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    int n = v.size();
    int i = 0;
    while (i < n) {
        if (v[i] == v[n - 1]) {
            cout << "Cut at index " << i << endl;
            break;
        }
        i++;
    }
    return 0;
}
```