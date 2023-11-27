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
    vector<int> arr = {5, 2, 8, 3, 1};
    int k = 3;
    vector<int> result = maximum(arr, k);
    vector<int> expected = {8, 5, 3};
    bool isEqual = issame(result, expected);
    return 0;
}