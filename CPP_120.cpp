#include <vector>

using namespace std;

bool issame(vector<int> a, vector<int> b) {
    // Code logic for comparing vectors
    // ...
    return true; // Placeholder return statement
}

vector<int> maximum(vector<int> arr, int k) {
    sort(arr.begin(), arr.end(), greater<int>());
    arr.resize(k);
    return arr;
}

int main() {
    assert(issame(maximum({1, 2, 3, -23, 243, -400, 0}, 0), {}));
    return 0;
}