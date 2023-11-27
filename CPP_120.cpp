#include <vector>

vector<int> maximum(vector<int> arr, int k);

bool issame(vector<int> a,vector<int> b) {
    for (int i = 0; i < a.size(); i++) {
        if (a[i] != b[i]) {
            return false;
        }
    }
    return true;
}

vector<int> maximum(vector<int> arr, int k) {
    sort(arr.begin(), arr.end(), greater<int>());
    vector<int> result(arr.begin(), arr.begin() + k);
    return result;
}

int main() {
    // Code not provided as it is not part of the modification.
    return 0;
}