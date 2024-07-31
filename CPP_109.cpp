int n = arr.size();
    vector<int> sorted_arr = arr;
    sort(sorted_arr.begin(), sorted_arr.end());

    for (int i = 0; i < n; i++) {
        if (arr == sorted_arr) {
            return true;
        }
        arr.insert(arr.begin(), arr.back());
        arr.pop_back();
    }
    return false;
}