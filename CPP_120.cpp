#include <vector>
#include <algorithm>

int maximum(int a, int b) {
    return a > b ? a : b;
}

vector<int> solve(vector<int> arr, int k) {
    sort(arr.begin(), arr.end(), greater<int>());
    arr.resize(k);
    return arr;
}

int main() {
    vector<int> arr = {5, 3, 8, 2, 1};
    int k = 3;
    vector<int> result = solve(arr, k);

    for (int num : result) {
        cout << num << " ";
    }
    
    assert(maximum(5, 8) == 8);
    
    return 0;
}