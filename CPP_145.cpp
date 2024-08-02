#include <algorithm>

vector<int> order_by_points(vector<int> nums) {
    vector<int> result = nums;
    sort(result.begin(), result.end(), [&nums](int a, int b) {
        if (get_digit_sum(a) == get_digit_sum(b)) {
            return distance(nums.begin(), find(nums.begin(), nums.end(), a)) <
                   distance(nums.begin(), find(nums.begin(), nums.end(), b));
        }
        return get_digit_sum(a) < get_digit_sum(b);
    });
    return result;
}

int get_digit_sum(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}