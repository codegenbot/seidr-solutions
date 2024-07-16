partial_sort(arr.begin(), arr.begin() + k, arr.end(), greater<int>());
    arr.resize(k);
    return arr;
}