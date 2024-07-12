int basement(vector<int>& v) {
    int sum = 0;
    int idx = -1;
    for (int i = 0; i < v.size(); i++) {
        sum += v[i];
        if (sum < 0) {
            idx = i + 1;
            break;
        }
    }
    return idx == -1 ? -1 : idx;
}