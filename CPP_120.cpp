#include <vector>

vector<int> maximum(vector<int> arr, int k) {
    sort(arr.begin(), arr.end(), greater<int>());
    vector<int> result(arr.begin(), arr.begin() + k);
    return result;
}

vector<int> issame(vector<int> a, vector<int> b) {
    // code implementation
}

int main() {
    // code implementation
}