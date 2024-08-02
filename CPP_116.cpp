vector<int> sort_array(vector<int> arr) {
    sort(arr.begin(), arr.end(), [](int a, int b) {
        if (count(bite(a)) == count(bite(b)))
            return a < b;
        else
            return count(bite(a)) < count(bite(b));
    });
    return arr;
}

int bite(int n) {
    int res = 0;
    while (n > 0) {
        if (n & 1)
            res++;
        n >>= 1;
    }
    return res;
}