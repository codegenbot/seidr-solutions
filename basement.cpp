int basement(vector<int> v) {
    int sum = 0;
    int i = 1; 
    while (i <= v.size()) {
        sum += v[i-1]; 
        if (sum < 0)
            return i - 1;
        i++;
    }
    return -1;
}