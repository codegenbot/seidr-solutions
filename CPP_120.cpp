#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) {
        return false;
    }
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> maximum(vector<int> arr, int k) {
    vector<int> res(k);
    partial_sort(arr.begin(), arr.end() - k + 1, arr.end());
    for (int i = 0; i < k; i++) {
        res[i] = arr[arr.size() - k + i];
    }
    return res;
}

int main() {
    int k;
    cin >> k;

    if (k <= 0) {
        cout << "Invalid value of k" << endl;
        return -1;
    } else {
        vector<int> res = maximum({1, 2, 3, -23, 243, -400, 0}, k);
        // Do something with the result
    }

    return 0;
}