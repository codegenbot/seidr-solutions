#include <algorithm>

vector<int> order_by_points(vector<int> nums) {
    sort(nums.begin(), nums.end(), [&] (int a, int b) {
        if (get_sum(a) == get_sum(b)) return nums.find(a) < nums.find(b);
        return get_sum(a) < get_sum(b);
    });
    
    return nums;
}

int get_sum(int n) {
    int sum = 0;
    while (n != 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}