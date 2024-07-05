int basement(vector<int>& v) {
    int sum = 0;
    int i = 0; // declare and initialize i here
    for (i = 0; i < v.size(); i++) {
        sum += v[i];
        if (sum >= 0) {
            return -1; // return -1 if no index found where the sum becomes negative
        }
    }
    return i + 1; // return the first index where the sum becomes negative
}