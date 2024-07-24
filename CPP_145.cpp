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
        for (int i = 0; i < a.size(); ++i) {
            if (a[i] != b[i]) {
                return a[i] < b[i];
            }
        }
    }
    return sum_a < sum_b;
}

sort(nums.begin(), nums.end(), order_by_points);
return nums;