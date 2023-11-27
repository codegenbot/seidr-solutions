#include <vector>

vector<int> maximum(vector<int> arr, int k) {
    sort(arr.begin(), arr.end(), greater<int>());
    vector<int> result(arr.begin(), arr.begin() + k);
    return result;
}

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

int main() {
    vector<int> arr = {5, 2, 8, 9, 1};
    int k = 3;
    vector<int> result = maximum(arr, k);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    cout << endl;

    vector<int> a = {1, 2, 3};
    vector<int> b = {1, 2, 3};
    if (issame(a, b)) {
        cout << "Same" << endl;
    } else {
        cout << "Different" << endl;
    }

    return 0;
}