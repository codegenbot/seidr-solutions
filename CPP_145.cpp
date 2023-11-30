#include <vector>
#include <algorithm>

bool compareSumOfDigits(int x, int y) {
    int sumX = 0, sumY = 0;
    int absX = abs(x), absY = abs(y);
    
    while (absX > 0) {
        sumX += absX % 10;
        absX /= 10;
    }
    
    while (absY > 0) {
        sumY += absY % 10;
        absY /= 10;
    }
    
    if (sumX == sumY) {
        return x < y;
    }
    
    return sumX < sumY;
}

vector<int> order_by_points(vector<int> nums) {
    sort(nums.begin(), nums.end(), compareSumOfDigits);
    return nums;
}