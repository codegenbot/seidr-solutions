#include <algorithm>
#include <vector>

bool compare(int a, int b) {
    int sumA = 0, sumB = 0;
    int tempA = std::abs(a), tempB = std::abs(b);
    
    while(tempA > 0) {
        sumA += tempA % 10;
        tempA /= 10;
    }
    
    while(tempB > 0) {
        sumB += tempB % 10;
        tempB /= 10;
    }
    
    if(sumA == sumB) {
        return a < b;
    }
    
    return sumA < sumB;
}

std::vector<int> order_by_points(std::vector<int> nums) {
    std::sort(nums.begin(), nums.end(), compare);
    return nums;
}

int main() {
    // Test the order_by_points function
    std::vector<int> nums = {123, 45, 6789, 0, -9876};
    std::vector<int> sortedNums = order_by_points(nums);
    
    for(int num : sortedNums) {
        std::cout << num << " ";
    }
    
    return 0;
}