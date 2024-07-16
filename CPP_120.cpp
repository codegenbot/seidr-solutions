#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> maximum(vector<int> arr, int k) {
    vector<int> result(arr.size());
    partial_sort(arr.begin(), arr.end() - k, arr.end(),
                  [&result](int a, int b) { return a > result.back(); });
    for (int i = 0; i < k; ++i) {
        result.push_back(arr[arr.size() - i - 1]);
    }
    return result;
}

int main() {
    vector<int> arr = {-3, -4, 5};
    int k = 3;
    vector<int> res = maximum(arr, k);
    for (int num : res) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}