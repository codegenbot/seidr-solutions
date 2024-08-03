#include <cassert>
#include <vector>

bool issame(std::vector<int> a, std::vector<int> b) {
    if(a.size() != b.size())
        return false;
    
    for(int i = 0; i < a.size(); i++) {
        if(a[i] != b[i])
            return false;
    }
    
    return true;
}

std::vector<int> largest_smallest_integers(std::vector<int> nums) {
    int largest = nums[0];
    int smallest = nums[0];
    
    for(int i = 1; i < nums.size(); i++) {
        if(nums[i] > largest)
            largest = nums[i];
        if(nums[i] < smallest)
            smallest = nums[i];
    }
    
    return {smallest, largest};
}

int main() {
    assert(issame({-6, -4, -4, -3, -100, 1}, {-3, 1}));
    
    assert(issame(largest_smallest_integers({-6, -4, -4, -3, -100, 1}), {-100, 1}));
    
    return 0;
}