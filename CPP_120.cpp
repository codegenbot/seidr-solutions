#include <vector>
using namespace std;

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> maximum(vector<int> arr, int k) {
    vector<int> result;
    if (k > arr.size()) {
        return {};
    }
    sort(arr.begin(), arr.end());
    for (int i = arr.size() - 1; i >= arr.size() - k; --i) {
        result.push_back(arr[i]);
    }
    return result;
}