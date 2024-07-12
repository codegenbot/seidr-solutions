int basement(vector<int>& v) {
    int sum = 0;
    for (int i = 0; i < v.size(); i++) {
        sum += v[i];
        if (sum > 0) 
            sum = 0;
        else if (sum < 0)
            return i + 1;
    }
    return -1;
}