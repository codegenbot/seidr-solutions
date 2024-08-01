Here is the completed code:

vector<int> maximum(vector<int> arr, int k) {
    sort(arr.begin(), arr.end());
    return vector<int>(arr.rbegin(), arr.rbegin() + k);
}