```cpp
#include <bits/stdc++.h>
using namespace std;

long long double_the_difference(vector<float> lst) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && floor(num) == num) {
            sum += pow(num, 2);
        }
    }
    return sum;
}

int main() {
    int n;
    cin >> n;

    vector<float> lst(n);

    for(int i=0; i<n; i++) {
        cin >> lst[i];
    }

    long long result = double_the_difference(lst);
    cout << result;
}