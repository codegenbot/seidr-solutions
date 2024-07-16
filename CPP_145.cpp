#include <algorithm>
#include <vector>
#include <cassert>

using namespace std;

std::vector<int> sort_vector(std::vector<int> nums) {
    std::sort(nums.begin(), nums.end());
    return nums;
}

bool order_by_points(std::vector<int> a, std::vector<int> b) {
    return a.size() < b.size();
}

int main() {
    assert(issame(sort_vector({0, 6, 6, -76, -21, 23, 4}), std::vector<int>{-76, -21, 0, 4, 23, 6, 6}));
    assert(order_by_points({0, 6, 6, -76, -21, 23, 4}, std::vector<int>{-76, -21, 0, 4, 23, 6, 6}));
    
    return 0;
}