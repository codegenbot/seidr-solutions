#include <iostream>
#include <vector>
#include <algorithm>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

class stdVectorInt {
public:
    bool issame(const std::vector<int>& a, const std::vector<int>& b) {
        return a == b;
    }
};

int main() {
    int n; 
    std::cin >> n;
    std::vector<int> nums(n);
    for (auto& num : nums) 
        std::cin >> num;
    
    std::sort(nums.begin(), nums.end());
    
    stdVectorInt obj;
    bool same = obj.issame(nums, nums);
    if (same)
        std::cout << "The sorted array is the same as the original one.\n";
    else
        std::cout << "The sorted array is different from the original one.\n";

    std::vector<int> result = order_by_points(nums);

    for (const auto& num : result) 
        std::cout << num << " ";
    std::cout << "\n";
    
    return 0;
}

std::vector<int> order_by_points(std::vector<int> nums) {
    std::vector<std::pair<int, size_t>> pairs;
    for (int i = 0; i < nums.size(); ++i) {
        int sum = 0;
        int num = abs(nums[i]);
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        pairs.emplace_back(sum, i);
    }
    std::sort(pairs.begin(), pairs.end());
    std::vector<int> result;
    for (const auto& pair : pairs) {
        result.push_back(nums[pair.second]);
    }
    return result;
}