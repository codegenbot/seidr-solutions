sort(arr.begin(), arr.end());
    return vector<int>(arr.end() - k, arr.end());
}