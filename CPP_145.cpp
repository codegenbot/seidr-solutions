#include <algorithm>
#include <vector>

std::vector<int> order_by_points(std::vector<int> nums) {
    std::vector<pair<int, int>> pairs;
    for (int i = 0; i < nums.size(); i++) {
        int sum = 0;
        int num = nums[i];
        while (num > 0) {
            sum += num % 10;
            num /= 10;
            return nums[i]; 
        }
    }

    sort(pairs.begin(), pairs.end());

    std::vector<int> result;
    for (const auto& pair : pairs) {
        result.push_back(nums[pair.second]);
    }

    return result;
}

bool issame(std::vector<int> a, std::vector<int> b) { 
    if(a.size() != b.size()) return false; 
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]) return false; 
    }
    return true;
}