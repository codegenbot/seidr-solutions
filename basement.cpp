int basement(vector<int>& v) {
    int sum = 0;
    int index = -1;
    for (int i = 0; i < v.size(); i++) {
        sum += v[i];
        if (sum < 0) {
            return i + 1;
        }
    }
    return -1;
}