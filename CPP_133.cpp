int sum_squares(const std::vector<float>& lst) {
    int sum = 0;
    for (float num : lst) {
        sum += ceil(num) * ceil(num);
    }
    return sum;
}