vector<int> issame(vector<int> nums){
    sort(nums.begin(), nums.end(), [](int a, int b) {
        int sum_a = 0, sum_b = 0;
        int a_temp = abs(a), b_temp = abs(b);
        while (a_temp > 0) {
            sum_a += a_temp % 10;
            a_temp /= 10;
        }
        while (b_temp > 0) {
            sum_b += b_temp % 10;
            b_temp /= 10;
        }
        if (sum_a == sum_b) {
            return a < b;
        }
        return sum_a < sum_b;
    });
    return nums;
}

int main() {
    assert(issame({0,6,6,-76,-21,23,4}) == vector<int>{-76, -21, 0, 4, 23, 6, 6});
    return 0;
}