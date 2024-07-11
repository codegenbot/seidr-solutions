bool isCircularSorted(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n; ++i) {
        bool sorted = true;
        for (int j = 1; j < n; ++j) {
            if (arr[j] < arr[j - 1]) {
                sorted = false;
                break;
            }
        }
        if (sorted) {
            return true;
        }
        rotate(arr.rbegin(), arr.rbegin() + 1, arr.rend());
    }
    return false;
}