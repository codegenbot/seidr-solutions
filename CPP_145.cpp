sort(nums.begin(), nums.end(), [](int a, int b) {
    int sum_a = 0, sum_b = 0;
    auto digit_sum = [](int num) {
        int sum = 0;
        while (num != 0) {
            sum += abs(num % 10);
            num /= 10;
        }
        return sum;
    };
    sum_a = digit_sum(a);
    sum_b = digit_sum(b);
    if (sum_a == sum_b) {
        return a < b;
    }
    return sum_a < sum_b;
});
return nums;