```c++
#include <vector>
#include <algorithm>

bool issame(int a, int b) {
    return a == b;
}

vector<int> maximum(vector<int> arr, int k) {
    vector<int> result(arr.begin(), arr.begin() + k);
    sort(result.begin(), result.end());
    return result;
}