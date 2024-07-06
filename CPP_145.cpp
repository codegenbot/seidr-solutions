```cpp
#include <algorithm>
#include <vector>

int get_sum_of_digits(int num) {
    int sum = 0;
    while (num != 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

bool issame(vector<int> a, vector<int> b) {
    if(a.size()!=b.size()) return false; 
    for(int i=0;i<a.size();i++){
        if(a[i]!=b[i])return false;
    }
    return true;
}

vector<int> order_by_points(vector<int> nums) {
    vector<pair<int, int>> pairs;
    for (int i = 0; i < nums.size(); i++) {
        pairs.push_back({get_sum_of_digits(nums[i]), i});
    }
    sort(pairs.begin(), pairs.end());
    vector<int> result;
    for (const auto& pair : pairs) {
        result.push_back(nums[pair.second]);
    }
    return result;

}

int main() {
    vector<int> nums = {0,6,6,-76,-21,23,4};
    assert(issame(order_by_points(nums) , {-76, -21, 0, 4, 23, 6, 6}));
    return 0;
}