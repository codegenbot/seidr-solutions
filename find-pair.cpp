#include <iostream>
#include <vector>
#include <unordered_map>

int main() {
    int n, target;
    std::cin >> n >> target;
    
    std::vector<int> nums(n);
    for(int i = 0; i < n; i++) {
        std::cin >> nums[i];
    }
    
    std::unordered_map<int, int> hash;
    for(int i = 0; i < n; i++) {
        if(hash.find(target - nums[i]) != hash.end()) {
            std::cout << nums[i] << " " << target - nums[i] << std::endl;
            break;
        }
        hash[nums[i]] = i;
    }
    
    return 0;
}