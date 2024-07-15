bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    std::pair<int, int> b_sum_product = sum_product(b);
    return sum_product(a) == b_sum_product;
}