#include <algorithm>
#include <vector>
#include <string>

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
    std::vector<int> res = nums;
    sort(res.begin(), res.end(), compare);
    return res;
}

int main() {
    std::vector<int> nums = {0,6,6,-76,-21,23,4};
    std::vector<int> res = order_by_points(nums);
    std::cout << "{";
    for(int i=0; i<res.size()-1;i++)
        std::cout << res[i]<<", ";
    std::cout<<res.back()<<"}"<<std::endl;
    return 0;
}