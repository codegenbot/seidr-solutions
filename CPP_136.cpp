#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

vector<int> largest_smallest_integers(const vector<int>& nums) {
    int smallest = nums[0];
    int largest = nums[0];
    
    for (int i = 1; i < nums.size(); ++i) {
        if (nums[i] < smallest) {
            smallest = nums[i];
        }
        if (nums[i] > largest) {
            largest = nums[i];
        }
    }
    
    return {smallest, largest};
}

bool issame(vector<int> a, vector<int> b) {
    return a[0] == b[0] && a[1] == b[1];
}

int main() {
    assert(issame(largest_smallest_integers({-6, -4, -4, -3, -100, 1}), {-100, 1}));
    return 0;
}