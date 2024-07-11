struct order_by_points {
    bool operator()(const int& a, const int& b) const {
        int sum_a = 0, sum_b = 0;
        int temp_a = abs(a), temp_b = abs(b);
        while (temp_a) {
            sum_a += temp_a % 10;
            temp_a /= 10;
        }
        while (temp_b) {
            sum_b += temp_b % 10;
            temp_b /= 10;
        }
        if (sum_a == sum_b) {
            return a < b;
        }
        return sum_a < sum_b;
    }
};

sort(nums.begin(), nums.end(), order_by_points());

assert(order_by_points()({0,6,6,-76,-21,23,4}) == vector<int>{-76, -21, 0, 4, 23, 6, 6});