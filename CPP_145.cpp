```cpp
#include <vector>
#include <algorithm>

bool issame(vector<int> a,vector<int>b){
    return a==b;
}

int main() {
    vector<int> order_by_points_result = order_by_points({0,6,6,-76,-21,23,4});
    assert(issame({-76, -21, 0, 4, 23, 6, 6}, order_by_points_result));
    return 0;
}

vector<int> order_by_points(vector<int> nums) {
    vector<pair<int, int>> pairs;
    for (int i = 0; i < nums.size(); i++) {
        int sum = 0;
        int num = abs(nums[i]);
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        pairs.push_back({sum, i});
    }
    sort(pairs.begin(), pairs.end());
    vector<int> result;
    for (const auto& pair : pairs) {
        result.push_back(nums[pair.second]);
    }
    return result;
}