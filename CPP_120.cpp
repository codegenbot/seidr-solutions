#include <vector>

using namespace std;

bool areEqual(vector<int> arr1, vector<int> arr2) {
    if (arr1.size() != arr2.size()) return false;
    for (int i = 0; i < arr1.size(); i++) {
        if (arr1[i] != arr2[i]) return false;
    }
    return true;
}

vector<int> maximum(vector<int> arr, int k) {
    vector<int> result;
    sort(arr.begin(), arr.end());
    for (int i = 0; i < k; i++) {
        result.push_back(arr[arr.size() - 1 - i]);
    }
    return result;
}