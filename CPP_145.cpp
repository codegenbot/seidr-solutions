#include <vector>
#include <algorithm>
#include <numeric>
#include <cassert>

using namespace std;

int sum_of_digits(int num) {
    int sum = 0;
    while (num != 0) {
        sum += abs(num) % 10;
        num /= 10;
    }
    return sum;
}

vector<int> order_by_points(vector<int> nums) {
    vector<int> sorted_nums = nums; 
    sort(sorted_nums.begin(), sorted_nums.end(), [&](int a, int b) {
        int sum_a = sum_of_digits(a);
        int sum_b = sum_of_digits(b);
        if (sum_a == sum_b) {
            return a < b;
        }
        return sum_a < sum_b;
    });
    return sorted_nums;
}