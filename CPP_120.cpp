#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    if(a.size() != b.size()) {
        return false;
    }
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> arr;
    int n, k;
    cin >> n >> k;
    for(int i = 0; i < n; i++) {
        int val;
        cin >> val;
        arr.push_back(val);
    }
    vector<int> result(arr.begin(), arr.begin() + k);
    sort(result.begin(), result.end());
    if(k > n) {
        cout << "Error: k cannot be greater than the size of the array." << endl;
    } else {
        cout << "The maximum of the first k elements is ";
        for(int i = 0; i < k; i++) {
            cout << result[i] << " ";
        }
        cout << endl;
    }
    return 0;
}