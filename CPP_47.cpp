```cpp
#include <vector>
using namespace std;

int calculateMedian(vector<float> v) {
    sort(v.begin(), v.end());
    int n = v.size();
    if (n % 2 == 0)
        return (v[n/2 - 1] + v[n/2]) / 2;
    else
        return v[n/2];
}