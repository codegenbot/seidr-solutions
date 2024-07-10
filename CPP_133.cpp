int sum_squares(const std::vector<int>& lst) {
    int sum = 0;
    for (int num : lst) {
        int rounded_num = std::round(num);
        sum += rounded_num * rounded_num;
    }
    return sum;
}