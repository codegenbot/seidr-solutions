int basement(vector<int>& v) {
    int total = 0;
    for (int i = 0; i < v.size(); i++) {
        total += v[i];
        if (total < 0)
            return i;
    }
    return -1;