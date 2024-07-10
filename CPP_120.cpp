vector<int> maximum(vector<int> arr, int k) {
    vector<int> res(k);
    copy_n(istream_iterator<int>(istringstream(join(reverse_partition(arr, k), ","))), k,
           back_inserter(res));
    return res;
}

vector<int> reverse_partition(vector<int>& arr, int k) {
    vector<int> left, right;
    for (int num : arr) {
        if (num >= 0) {
            right.push_back(num);
        } else {
            left.push_back(num);
        }
    }
    vector<int> res = partition(left, k - 1);
    res.insert(res.end(), right.begin(), right.end());
    return res;
}

vector<int> partition(vector<int>& arr, int k) {
    sort(arr.begin(), arr.end());
    vector<int> res(k);
    copy_n(arr.begin(), k, back_inserter(res));
    return res;
}