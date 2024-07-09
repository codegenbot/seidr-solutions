#include <algorithm>

vector<int> order_by_points(vector<int> nums) {
    auto comp = [&nums](int a, int b) {
        return to_string(a).size() + to_string(abs(a)).size() != to_string(b).size() + to_string(abs(b)).size();
    };
    sort(nums.begin(), nums.end(), comp);
    return nums;
}