sort(nums.begin(), nums.end(), [](int a, int b) {
    int sum1 = 0, sum2 = 0;
    auto calc_digit_sum = [](int num) {
        int sum = 0;
        while (num) {
            sum += abs(num % 10);
            num /= 10;
        }
        return sum;
    };
    sum1 = calc_digit_sum(a);
    sum2 = calc_digit_sum(b);
    return sum1 == sum2 ? a < b : sum1 < sum2;
});
return nums;