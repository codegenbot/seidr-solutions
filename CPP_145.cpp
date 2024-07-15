vector<int> order_by_points(vector<int> nums) {
    sort(nums.begin(), nums.end(), [](int a, int b) {
        int sumA = abs(a), sumB = abs(b);
        while (sumA >= 10) sumA = sumA / 10 + sumA % 10;
        while (sumB >= 10) sumB = sumB / 10 + sumB % 10;
        return sumA == sumB ? a < b : sumA < sumB;
    });
    return nums;
}

bool issame(vector<int> a, vector<int> b) {
    if (a.size() != b.size()) return false;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    assert(issame(order_by_points({0, 6, 6, -76, -21, 23, 4}), {-76, -21, 0, 4, 23, 6, 6}));
}