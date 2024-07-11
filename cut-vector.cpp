for (int i = 1; i < n; i++) {
        int diff = std::abs(std::accumulate(arr.begin(), arr.begin()+i, 0) - std::accumulate(arr.begin()+i, arr.end(), 0));
        if (diff <= min_diff) {
            min_diff = diff;
            result.first = std::vector<int>(arr.begin(), arr.begin()+i);
            result.second = std::vector<int>(arr.begin()+i, arr.end());
        }
    }