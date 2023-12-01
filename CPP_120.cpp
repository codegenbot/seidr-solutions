#include <vector>

vector<int> maximum(vector<int> arr, int k);

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int k = 3;
    vector<int> result = maximum(arr, k);
    for (int i = 0; i < result.size(); i++) {
        cout << result[i] << " ";
    }
    return 0;
}

vector<int> maximum(vector<int> arr, int k) {
    sort(arr.begin(), arr.end(), greater<int>());
    vector<int> result(arr.begin(), arr.begin() + k);
    return result;
}