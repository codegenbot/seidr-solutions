bool issame(vector<int> a, vector<int> b) {
    int sum_a = 0, sum_b = 0;
    for (int num : a) {
        sum_a += abs(num);
    }
    for (int num : b) {
        sum_b += abs(num);
    }
    return sum_a == sum_b;
}

bool order_by_points(vector<int> a, vector<int> b) {
    int sum_a = 0, sum_b = 0;
    for (int num : a) {
        sum_a += abs(num);
    }
    for (int num : b) {
        sum_b += abs(num);
    }
    if (sum_a == sum_b) {
        return a < b;
    }
    return sum_a < sum_b;
}

sort(nums.begin(), nums.end(), [](int a, int b) {
    int sum_a = 0, sum_b = 0;
    int temp_a = abs(a), temp_b = abs(b);
    while (temp_a > 0) {
        sum_a += temp_a % 10;
        temp_a /= 10;
    }
    while (temp_b > 0) {
        sum_b += temp_b % 10;
        temp_b /= 10;
    }
    if (sum_a == sum_b) {
        return find(nums.begin(), nums.end(), a) < find(nums.begin(), nums.end(), b);
    }
    return sum_a < sum_b;
});
return nums;