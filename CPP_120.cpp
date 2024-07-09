```cpp
#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i<a.size(); i++){
        if(a[i] != b[i]) return false;
    }
    return true;
}

using namespace std;

vector<int> maximum(vector<int> arr, int k) {
    vector<int> result(k);
    partial_sort(arr.begin(), arr.begin() + k, arr.end());
    for (int i = 0; i < k; i++) {
        result[i] = arr[i];
    }
    return result;
}