vector<int> maximum(vector<int> myArr, int k) {
    vector<int> result;
    if (k > myArr.size()) {
        return {};
    }
    sort(myArr.begin(), myArr.end());
    for (int i = myArr.size() - 1; i >= myArr.size() - k; --i) {
        result.push_back(myArr[i]);
    }
    return result;
}