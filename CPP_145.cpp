bool issame(vector<int> a, vector<int> b) {
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

sort(nums.begin(), nums.end(), issame);
return nums;