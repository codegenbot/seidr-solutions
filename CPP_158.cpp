```
string find_max(const vector<string>& words) {
    int maxCount = 0;
    for (auto word : words) {
        int count = 0;
        for (auto ch : word) {
            if (ch != ' ') {
                count++;
            }
        }
        if (count > maxCount) {
            maxCount = count;
        }
    }
    return maxCount;
}
```