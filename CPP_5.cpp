#include <iostream>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b){
    return a == b;
}

std::vector<int> intersperse(const std::vector<int>& nums, int val){
    std::vector<int> result;
    for (int i = 0; i < nums.size(); ++i) {
        result.push_back(nums[i]);
        if (i < nums.size() - 1) {
            result.push_back(val);
        }
    }
    return result;
}

int main(){
    assert(issame(intersperse({2, 2, 2}, 2),{2, 2, 2, 2, 2}));
}