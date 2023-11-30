vector<int> order_by_points(vector<int> nums){
    vector<int> result;

    // Sort the vector in ascending order
    sort(nums.begin(), nums.end());

    // Helper function to calculate the sum of digits
    auto sum_of_digits = [](int num) {
        int sum = 0;
        while (num != 0) {
            sum += abs(num % 10);
            num /= 10;
        }
        return sum;
    };

    // Sort the vector based on the sum of digits
    sort(nums.begin(), nums.end(), [&](int a, int b) {
        int sum_a = sum_of_digits(a);
        int sum_b = sum_of_digits(b);
        if (sum_a == sum_b) {
            return find(nums.begin(), nums.end(), a) < find(nums.begin(), nums.end(), b);
        }
        return sum_a < sum_b;
    });

    return nums;
}