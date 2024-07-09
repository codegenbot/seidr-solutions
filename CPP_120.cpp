vector<int> maximum(vector<int> arr, int k) {
    vector<int> result;
    if (k >= arr.size()) {
        return sort(arr.begin(), arr.end()); // Return entire array if k is equal to or more than the size of the array.
    } else {
        sort(arr.begin(), arr.end());  // Sort the given array
        for (int i = 0; i < k; i++) { 
            result.push_back(arr[arr.size() - i - 1]); // Add the last element to the result which will be the maximum in this case.
        }
    }
    return result;
}