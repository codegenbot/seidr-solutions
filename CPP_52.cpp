#include <vector>
#include <cassert>

bool below_threshold(std::vector<int>& l, int t) {
    for(int num : l) {
        if(num >= t) {
            return false;
        }
    }
    return true;
}

int main() {
    std::vector<int> nums = {1, 8, 4, 10};
    assert(!below_threshold(nums, 10));
}