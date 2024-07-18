vector<int> order_by_points(vector<int> nums);

bool issame(const vector<int>& a, const vector<int>& b) {
    return a == b;
}

int main() {
    assert(issame(order_by_points({0, 6, 6, -76, -21, 23, 4}), {-76, -21, 0, 4, 23, 6, 6}));
    return 0;
}

vector<int> order_by_points(vector<int> nums) {
    sort(nums.begin(), nums.end(), [](int a, int b) {
        int sumA = 0, sumB = 0;
        a = abs(a);
        b = abs(b);
        while (a > 0) {
            sumA += a % 10;
            a /= 10;
        }
        while (b > 0) {
            sumB += b % 10;
            b /= 10;
        }
        if (sumA == sumB) {
            return a < b;
        }
        return sumA < sumB;
    });
    return nums;
}