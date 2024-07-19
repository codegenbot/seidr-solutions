```cpp
#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
using size_type = size_t;

long long doubleTheDifference(vector<float> lst) {
    long long pos_sum = 0, neg_sum = 0;
    for (float n : lst) {
        if (n > 0 && modf(n, &n) == 0) {
            pos_sum += pow(n, 2);
        } else if (n < 0 && modf(-n, &n) == 0) {
            neg_sum -= pow(-n, 2);
        }
    }
    return abs(pos_sum - neg_sum);
}

int main() {
    vector<float> lst;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        float x;
        cin >> x;
        lst.push_back(x);
    }
    long long result = doubleTheDifference(lst);
    cout << "Double the difference: " << result << endl;
    return 0;
}