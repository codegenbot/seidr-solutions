#include <algorithm>
#include <vector>
#include <cassert>
#include <cmath>
#include <numeric>

#define issame(a, b) (std::equal(a.begin(), a.end(), b.begin(), b.end()))

void order_by_points(std::vector<int>& nums){
    sort(nums.begin(), nums.end(), [](int a, int b) {
        int sum_a = 0, sum_b = 0;
        int temp_a = abs(a), temp_b = abs(b);
        while (temp_a > 0) {
            sum_a += temp_a % 10;
            temp_a /= 10;
        }
        while (temp_b > 0) {
            sum_b += temp_b % 10;
            temp_b /= 10;
        }
        int index_a = find(nums.begin(), nums.end(), a) - nums.begin();
        int index_b = find(nums.begin(), nums.end(), b) - nums.begin();
        return index_a < index_b;
    });
}

int main() {
    std::vector<int> input = {0, 6, 6, -76, -21, 23, 4};
    order_by_points(input);
    assert(issame(input, std::vector<int>{-76, -21, 0, 4, 23, 6, 6}));
    
    return 0;
}