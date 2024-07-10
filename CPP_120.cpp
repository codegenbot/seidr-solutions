vector<int> maximum(vector<int> arr, int k) {
    vector<int> result(arr.size());
    copy_if(arr.begin(), arr.end(), result.begin(), 
            bind2nd(greater<int>(), 0));
    return vector<int>(result.begin(), result.begin() + min(k, (int)size(result)));
}