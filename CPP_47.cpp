```
#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

float median(vector<float> l) {
    sort(l.begin(), l.end());
    if (l.size() % 2 == 0) {
        return (l[l.size() / 2 - 1] + l[l.size() / 2]) / 2;
    } else {
        return l[l.size() / 2];
    }
}

int main() {
    vector<float> v = {3, 1, 2, 4, 5};
    cout << "Median: " << median(v) << endl;
    return 0;
}
```