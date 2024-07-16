int basement(std::vector<int>& vec) {
    for (int i = 0; i < vec.size(); ++i) {
        int sum = 0;
        for (int j = 0; j <= i; ++j) {
            sum += vec[j];
            if (sum < 0)
                return i;
        }
    }
    return -1;
}