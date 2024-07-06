#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    if(a.size() != b.size()) return false;
    for(int i = 0; i<a.size(); i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    vector<int> arr;
    int k, n;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter " << n << " integers: ";
    for(int i = 0; i<n; i++) {
        cin >> k;
        arr.push_back(k);
    }
    cout << "Maximum " << k << " numbers are: ";
    vector<int> result(arr.begin(), arr.begin() + k);
    sort(result.begin(), result.end());
    for(auto x : result) cout << x << " ";
    return 0;
}