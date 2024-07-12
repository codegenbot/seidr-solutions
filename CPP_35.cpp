int calculateMax() {
    std::initializer_list<int> ilist = {5, 3, -5, 2, -3, 3, 9, 0, 124, 1, -10};
    int max_val = *std::max_element(ilist.begin(), ilist.end());
    return std::abs(max_val);
}