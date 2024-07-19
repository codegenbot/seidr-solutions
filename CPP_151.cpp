long long double_the_difference(const vector<float>& lst, long long odd_sum) {
    long long sum = 0;
    for (float num : lst) {
        if (num > 0 && num == (int)num && (int)num % 2 != 0) {
            sum += num * num;
        }
    }
    return sum * 2 - odd_sum;
}