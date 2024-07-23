bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> order_by_points(vector<int> nums) {
    sort(nums.begin(), nums.end(), [](int a, int b) {
        int sumA = abs(a), sumB = abs(b);
        while (sumA > 9) sumA = sumA % 10 + sumA / 10;
        while (sumB > 9) sumB = sumB % 10 + sumB / 10;
        return sumA == sumB ? a < b : sumA < sumB;
    });
    return nums;
}

int main() {
    assert(issame(order_by_points({0,6,6,-76,-21,23,4}), {-76, -21, 0, 4, 23, 6, 6}));
    return 0;
}