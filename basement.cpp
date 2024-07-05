int basement(std::vector<int>& v) {
    int i = 0;
    int sum = 0;
    for (size_t i = 0; i < v.size(); i++) {
        sum += v[i];
        if (sum <= 0) {
            return i + 1;
        }
    }
    return -1;
}