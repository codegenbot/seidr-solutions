bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

int test_incremented_list() {
    assert(issame(incr_list({5, 2, 5, 2, 3, 3, 9, 0, 123}), std::vector<int>{6, 3, 6, 3, 4, 4, 10, 1, 124}));
    return 0;
}