```cpp
#include <bits/stdc++.h>

using namespace std;

int sum_squares(vector<float> lst) {
    int sum = 0;
    for (int i = 0; i < lst.size(); i++) {
        int rounded = ceil(lst[i]);
        sum += rounded * rounded;
    }
    return sum;
}

int main() {
    cout << sum_squares({-1, 1, 0}) << endl;

    return 0;
}
```