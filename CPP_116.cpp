```
#include <iostream>
#include <algorithm>
#include <vector>

bool issame(const std::vector<int>& a, const std::vector<int>& b) {
    return a == b;
}

class Solution {
public:
    std::vector<int> sort_array(std::vector<int> arr) {
        if (arr.empty()) 
            return arr; 

        std::sort(arr.begin(), arr.end());
        
        for (int i = 0; i < arr.size() - 1; ++i) {
            if ((arr[i] & (arr[i + 1] - 1)) != 0)
                return {};
        }
        return arr;
    }
};

int main() {
    Solution solution;
    std::vector<int> arr = {2,4,8,16,32};
    bool same = issame(solution.sort_array(arr), arr);
    if (same) {
        std::cout << "Array is sorted and all bits set to 1" << std::endl;
    } else {
        std::cout << "Array not sorted or some bits are not set to 1" << std::endl;
    }
    return 0;
}