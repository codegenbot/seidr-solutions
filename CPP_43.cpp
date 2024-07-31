bool pairs_sum_to_zero(const std::vector<int>& l) {
    for (size_t i = 0, j; i < l.size(); ++i) {
        for (j = i + 1; j < l.size(); ++j) {
            if (l[i] + l[j] == 0) {
                return true;
            }
        }
    }
    return false;
}