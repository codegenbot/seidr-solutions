```cpp
#include <vector>
using namespace std;

int calculateMedian(vector<float> v) {
    vector<float> vec = v;  
    sort(vec.begin(), vec.end());
    int n = vec.size();
    if (n % 2 == 0)
        return (vec[n/2 - 1] + vec[n/2]) / 2;
    else
        return vec[n/2];
}