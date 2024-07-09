vector<int> order_by_points(vector<int> nums) {
    vector<int> result = nums;
    sort(result.begin(), result.end(), [&nums](int a, int b) {
        if (getSumOfDigits(a) != getSumOfDigits(b)) {
            return getSumOfDigits(a) < getSumOfDigits(b);
        } else {
            return std::distance(nums.begin(), find(nums.begin(), nums.end(), a)) <
                   std::distance(nums.begin(), find(nums.begin(), nums.end(), b));
        }
    });
    return result;
}

int getSumOfDigits(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}