vector<int> maximum(vector<int> arr, int k) {
    sort(arr.rbegin(), arr.rend());
    arr.resize(k);
    return arr;
}