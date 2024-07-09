sort(l.begin(), l.end());
    for (size_t i = 0; i < l.size(); ++i) {
        size_t left = i + 1;
        size_t right = l.size() - 1;
        while (left < right) {
            int sum = l[i] + l[left] + l[right];
            if (sum == 0) {
                return true;
            } else if (sum < 0) {
                ++left;
            } else {
                --right;
            }
        }
    }
    return false;
}