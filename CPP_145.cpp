std::sort(nums.begin(), nums.end(), [=](int a, int b) {
    int sum_a = std::accumulate(std::to_string(abs(a)).begin(), std::to_string(abs(a)).end(), 0) - '0' * std::to_string(abs(a)).size();
    int sum_b = std::accumulate(std::to_string(abs(b)).begin(), std::to_string(abs(b)).end(), 0) - '0' * std::to_string(abs(b)).size();
    if (sum_a == sum_b) {
        return a < b;
    }
    return sum_a < sum_b;
});