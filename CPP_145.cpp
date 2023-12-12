```
#include <iostream>
#include <math.h>
#include <vector>
#include <string>
#include <utility>
using namespace std;

vector<int> order_by_points(vector<int> nums) {
    vector<pair<int, int>> points;
    for (int i = 0; i < nums.size(); i++) {
        int sum = 0;
        while (nums[i] > 0) {
            sum += nums[i] % 10;
            nums[i] /= 10;
        }
        points.push_back(make_pair(sum, i));
    }
    sort(points.begin(), points.end());
    vector<int> result;
    for (int i = 0; i < nums.size(); i++) {
        result.push_back(nums[points[i].second]);
    }
    return result;
}
```