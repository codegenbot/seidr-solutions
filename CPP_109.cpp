int n = arr.size();
    for (int i = 0; i < n; ++i) {
        if (arr == vector<int>(arr.begin() + i, arr.end()) + vector<int>(arr.begin(), arr.begin() + i)) {
            return true;
        }
    }
    return false;
}