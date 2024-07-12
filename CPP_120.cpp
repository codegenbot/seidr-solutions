#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    int sumA = 0;
    int sumB = 0;

    for(int i = 0; i < min(a.size(), b.size()); ++i) {
        sumA += a[i];
        sumB += b[i];
    }

    return sumA == sumB;
}

vector<int> maximum(vector<int> arr, int k) {
    vector<int> result(arr.begin(), arr.begin() + k);
    sort(result.begin(), result.end());
    return result;
}