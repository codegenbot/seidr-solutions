#include <vector>
#include <algorithm>

bool isEqual(vector<int> v1, vector<int> v2) {
    if(v1.size() != v2.size()) return false;
    for(int i = 0; i < v1.size(); i++) {
        if(v1[i] != v2[i]) return false;
    }
    return true;
}

vector<int> maximum(vector<int> arr, int k) {
    if(k >= arr.size()) {
        vector<int> result(arr.begin(), arr.end());
        sort(result.begin(), result.end());
        return result;
    } else {
        vector<int> temp(arr.begin(), arr.begin() + k);
        sort(temp.begin(), temp.end());
        return temp;
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) cin >> a[i];
    int k;
    cin >> k;
    if (!isEqual(maximum(a, k), {})) {
        return 1;
    }
    return 0;
}