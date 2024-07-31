int n = arr.size();
    if (n == 0) {
        return true;
    }
    int min_index = min_element(arr.begin(), arr.end()) - arr.begin();
    for (int i = 0; i < n; ++i) {
        if (arr[(min_index + i) % n] != i + 1) {
            return false;
        }
    }
    return true;
}