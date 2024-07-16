bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

vector<int> sortNumbers(const vector<int>& nums) {
    vector<int> sorted_nums = nums;

    sort(sorted_nums.begin(), sorted_nums.end(), [](int a, int b) {
        int sum_a = 0, sum_b = 0;
        a = abs(a);
        b = abs(b);

        while (a > 0) {
            sum_a += a % 10;
            a /= 10;
        }

        while (b > 0) {
            sum_b += b % 10;
            b /= 10;
        }

        if (sum_a == sum_b) {
            return a < b;
        }

        return sum_a < sum_b;
    });

    return sorted_nums;
}