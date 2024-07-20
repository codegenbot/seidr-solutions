vector<int> maximum(vector<int> myVector, int k) {
    vector<int> result;
    if (k > myVector.size()) {
        return {};
    }
    sort(myVector.begin(), myVector.end());
    for (int i = myVector.size() - 1; i >= myVector.size() - k; --i) {
        result.push_back(myVector[i]);
    }
    return result;
}