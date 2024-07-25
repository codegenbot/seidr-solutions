long long doubleTheDifference(vector<int> arr) {
    int pos = 0;
    for (int n : arr) {
        if (n % 2 != 0) {
            pos += n;
        }
    }
    return abs(pos - (accumulate(arr.begin(), arr.end(), 0) - pos));
}