#include <vector>
#include <algorithm>
#include <numeric>
#include <cassert>

using namespace std;

std::vector<int> order_by_points(const std::vector<int>& nums) {
    auto int_to_str = [](int num) {
        return to_string(abs(num));
    };

    std::vector<int> sorted_nums = nums; 
    std::sort(sorted_nums.begin(), sorted_nums.end(), [&](int a, int b) {
        int sum_a = std::accumulate(int_to_str(a).begin(), int_to_str(a).end(), 0, [](int acc, char c) { return acc + c - '0'; });
        int sum_b = std::accumulate(int_to_str(b).begin(), int_to_str(b).end(), 0, [](int acc, char c) { return acc + c - '0'; });
        if (sum_a == sum_b) {
            return a < b;
        }
        return sum_a < sum_b;
    });
    return sorted_nums;
}