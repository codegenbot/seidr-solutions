#include <vector>
#include <algorithm>

bool issame(vector<int> a, vector<int> b) {
    return a == b;
}

vector<int> order_by_points(vector<int> nums) {
    if (nums.empty()) {
        return nums;
    }
    
    vector<pair<int, int>> sumDigits;
    for (int i = 0; i < nums.size(); i++) {
        int num = nums[i];
        int sum = 0;
        while (num != 0) {
            sum += abs(num % 10);
            num /= 10;
        }
        sumDigits.push_back(make_pair(sum, i));
    }
    
    sort(sumDigits.begin(), sumDigits.end());
    
    vector<int> result;
    for (auto it = sumDigits.begin(); it != sumDigits.end(); it++) {
        result.push_back(nums[it->second]);
    }
    
    return result;
}

int main() {
    assert(issame(order_by_points({0, 6, 6, -76, -21, 23, 4}), {-76, -21, 0, 4, 23, 6, 6}));
    
    return 0;
}