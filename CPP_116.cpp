vector<int> sort_vector(vector<int> arr) {
    sort(arr.begin(), arr.end(), [](int a, int b) {
        int onesA = __builtin_popcount(a);
        int onesB = __builtin_popcount(b);
        if (onesA == onesB) {
            return a < b;
        }
        return onesA < onesB;
    });
    return arr;
}