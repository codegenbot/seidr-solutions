#include <algorithm>
#include <vector>
#include <string>

vector<int> order_by_points(vector<int> nums) {
    auto compare = [&](int a, int b) {
        if (a < b) return -1;
        if (a > b) return 1;
        return 0;
    };
    sort(nums.begin(), nums.end(), compare);
    return nums;
}

int main(){
    vector<int> result = order_by_points({0,6,6,-76,-21,23,4});
    assert(std::equal(result.begin(), result.end(),{-76, -21, 0, 4, 23, 6, 6}));
    return 0;
}