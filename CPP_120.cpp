vector<int> maximum(vector<int> arr, int k) {
    vector<int> res(k);
    copy( std::partial_sort(arr.begin(), arr.end()-k, arr.begin()),
           arr.end(), res.begin() );
    return res;
}