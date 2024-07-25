#include <vector>

vector<int> maximum(vector<int> arr, int k) {
    vector<int> sortedArr = arr;
    sort(sortedArr.begin(), sortedArr.end(), greater<int>());
    return vector<int>(sortedArr.begin(), sortedArr.begin() + k);
}