#include <algorithm>

vector<int> order_by_points(vector<int> nums){
    vector<pair<int, int>> points;
    
    for(int i=0; i<nums.size(); i++){
        int num = nums[i];
        int sum = 0;
        
        while(num != 0){
            sum += num % 10;
            num /= 10;
        }
        
        points.push_back(make_pair(sum, i));
    }
    
    sort(points.begin(), points.end());
    
    vector<int> result;
    
    for(auto point : points){
        result.push_back(nums[point.second]);
    }
    
    return result;
}