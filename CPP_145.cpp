#include <algorithm>
using namespace std;

vector<int> order_by_points(vector<int> nums) {
    vector<pair<int, int>> points;
    for (int i = 0; i < nums.size(); i++) {
        points.push_back({accumulate(istream_iterator<int>(istringstream(to_string(nums[i]))), istream_iterator<int>(), plus<int>()), i});
    }
    
    sort(points.begin(), points.end());
    
    vector<int> result;
    for (const auto& point : points) {
        result.push_back(nums[point.second]);
    }
    
    return result;
}