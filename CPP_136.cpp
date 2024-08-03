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
    int smallest = INT_MAX;
    int largest = INT_MIN;
    
    for(int num : nums) {
        smallest = std::min(smallest, num);
        largest = std::max(largest, num);
    }
    
    return {smallest, largest};
}

int main() {
    assert(issame({-6, -4, -4, -3, -100, 1}, {-3, 1}));
    
    assert(issame(largest_smallest_integers({-6, -4, -4, -3, -100, 1}), {-100, 1}));
    
    return 0;
}