sort(arr.begin(), arr.end());
    vector<int> result(arr.begin() + arr.size() - k, arr.end());
    return result;
}