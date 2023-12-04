```
int basement(vector<int>& v) {
    int sum = 0, i;
    for (i = 0; i < v.size() && sum >= 0; i++) {
        sum += v[i];
    }
    if (sum == 0) return 0; // If all elements are positive, return 0 as the first index with negative sum
    return i - 1;
}
```