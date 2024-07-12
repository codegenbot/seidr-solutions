int sum_squares(const std::vector<float>& lst) {
    int sum = 0;
    for (float num : lst) {
        sum += std::ceil(num) * std::ceil(num);
    }
    return sum;
}