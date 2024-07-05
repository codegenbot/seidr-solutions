int basement(const vector<int>& v) {
    int sum = 0;
    for (size_t i = 0; i < v.size(); i++) {
        sum += v[i];
        if (sum >= 0) {
            return i + 1; // Return the current index + 1, since we start at 0
        }
    }
    return -1; // If no negative sum is found, return -1
}