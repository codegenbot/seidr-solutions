```c++
#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> maximum(vector<int> arr, int k) {
    vector<int> res(k);
    partial_sort(res.begin(), res.end(), [&arr](int a, int b) { return std::abs(a) < std::abs(b); });
    for (int i = 0; i < k; ++i)
        res[i] = (k - i - 1 >= 0 && arr[k - i - 1] > res[0]) ? arr[k - i - 1] : res[0];
    return res;
}