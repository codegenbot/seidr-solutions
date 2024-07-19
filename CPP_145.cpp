bool issame(vector<int> a, vector<int> b);

vector<int> order_by_points(vector<int> nums) {
    sort(nums.begin(), nums.end(), [](int a, int b) {
        int sum_a = 0, sum_b = 0;
        int abs_a = abs(a), abs_b = abs(b);
        while (abs_a > 0) {
            sum_a += abs_a % 10;
            abs_a /= 10;
        }
        while (abs_b > 0) {
            sum_b += abs_b % 10;
            abs_b /= 10;
        }
        if (sum_a == sum_b) {
            return find(nums.begin(), nums.end(), a) < find(nums.begin(), nums.end(), b);
        }
        return sum_a < sum_b;
    });
    return nums;
}

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

int main() {
    assert(issame(order_by_points({0,6,6,-76,-21,23,4}), {-76, -21, 0, 4, 23, 6, 6}));
    return 0;
}