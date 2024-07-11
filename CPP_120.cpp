sort(arr.begin(), arr.end(), greater<int>());
    vector<int> result(arr.begin(), arr.begin() + k);
    return result;
}