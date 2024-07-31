#include <vector>
#include <algorithm>

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

vector<int> maximum(const vector<int>& arr, int k) {
    sort(arr.begin(), arr.end(), greater<int>());
    vector<int> result(arr.begin(), arr.begin() + k);
    return result;
}

int main() {
    assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 0), {}));
    // Additional test cases
}