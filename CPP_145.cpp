bool issame(const vector<int>& a, const vector<int>& b) {
    int sum_a = 0, sum_b = 0;
    for (int num : a) {
        sum_a += abs(num) % 10;
    }
    for (int num : b) {
        sum_b += abs(num) % 10;
    }
    if (sum_a == sum_b) {
        return a < b;
    }
    return sum_a < sum_b;
}

vector<int> order_by_points(vector<int> nums) {
    sort(nums.begin(), nums.end(), [](int a, int b) {
        vector<int> vec_a, vec_b;
        while (a != 0) {
            vec_a.push_back(a % 10);
            a /= 10;
        }
        while (b != 0) {
            vec_b.push_back(b % 10);
            b /= 10;
        }
        reverse(vec_a.begin(), vec_a.end());
        reverse(vec_b.begin(), vec_b.end());
        return issame(vec_a, vec_b);
    });
    return nums;
}

int main() {
    assert(issame(order_by_points({0, 6, 6, -76, -21, 23, 4}), {-76, -21, 0, 4, 23, 6, 6}));
    return 0;
}