#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

vector<int> maximum(vector<int> arr, int k) {
    vector<int> result(arr);
    sort(result.begin(), result.end());
    for(int i=1; i<=k; i++){
        cout << "Element at index " << i << ": " << result[result.size() - i] << endl;
    }
}