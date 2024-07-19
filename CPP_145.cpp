sort(nums.begin(), nums.end(), [](int a, int b) {
    int sum_digits_a = a > 0 ? accumulate(to_string(a).begin(), to_string(a).end(), 0, [](int sum, char c) { return sum + c - '0'; }) : -accumulate(to_string(-a).begin(), to_string(-a).end(), 0, [](int sum, char c) { return sum + c - '0'; });
    int sum_digits_b = b > 0 ? accumulate(to_string(b).begin(), to_string(b).end(), 0, [](int sum, char c) { return sum + c - '0'; }) : -accumulate(to_string(-b).begin(), to_string(-b).end(), 0, [](int sum, char c) { return sum + c - '0'; });
    return make_pair(sum_digits_a, &a) < make_pair(sum_digits_b, &b);
});
return nums;