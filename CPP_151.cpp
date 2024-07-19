long long double_the_difference(const vector<float> lst) {
    long long sum = 0;
    for (const auto &num : lst) {
        if (num > 0 && static_cast<int>(num) == num && static_cast<int>(num) % 2 != 0) {
            sum += static_cast<long long>(num * num);
        }
    }
    return sum;
}