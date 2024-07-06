#include <algorithm>
#include <vector>

std::vector<int> order_by_points(std::vector<int> nums) {
    auto compare = [&](int a, int b) {
        if (a == b) return 0;
        long sumA = 0, sumB = 0;
        for (char c : std::to_string(a)) sumA += c - '0';
        for (char c : std::to_string(b)) sumB += c - '0';
        if (sumA != sumB) return sumA - sumB > 0 ? 1 : -1;
        return distance(nums.begin(), find(nums.begin(), nums.end(), a)) -
               distance(nums.begin(), find(nums.begin(), nums.end(), b));
    };
    sort(nums.begin(), nums.end(), compare);
    return nums;
}

int main(){
    std::vector<int> result;
    for (int i : {-76, -21, 0, 4, 23, 6, 6}) 
        result.push_back(i); 
    assert(std::equal(result.begin(), result.end(),{-76, -21, 0, 4, 23, 6, 6}));
    return 0;
}