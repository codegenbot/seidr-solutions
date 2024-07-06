#include <algorithm>
#include <vector>

bool issame(vector<int> a,vector<int> b){
    return a == b;
}

int main() {
    assert (issame({-76, -21, 0, 4, 23, 6, 6}, order_by_points({0,6,6,-76,-21,23,4})));
    vector<int> result = order_by_points({0,6,6,-76,-21,23,4});
    return 0;
}

vector<int> order_by_points(vector<int> nums) {
    vector<pair<int, int>> pairs;
    for (int i = 0; i < nums.size(); i++) {
        pairs.emplace_back(abs(nums[i]), i);
    }
    sort(pairs.begin(), pairs.end());
    vector<int> result;
    for (const auto& pair : pairs) {
        if(pair.first > 0){
            result.push_back(1);
        }else{
            result.push_back(nums[pair.second]);
        }
    }
    return result;
}