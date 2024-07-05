vector<int> maximum(vector<int> arr, int k) {
    sort(arr.rbegin(), arr.rend());  // Sort in descending order
    vector<int> result(arr.begin(), arr.begin() + k); // Take the first k elements
    sort(result.begin(), result.end()); // Sort the result in ascending order
    return result;
}