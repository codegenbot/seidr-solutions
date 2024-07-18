int main() {
    int n;
    std::cin >> n;
    std::vector<int> nums(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> nums[i];
    }
    
    int totalSum = 0;
    for (int num : nums) {
        totalSum += num;
    }
    
    int sumLeft = 0;
    int minDiff = INT_MAX;
    int cutIndex = -1;
    
    for (int i = 0; i < n; ++i) {
        sumLeft += nums[i];
        int sumRight = totalSum - sumLeft;
        int diff = abs(sumLeft - sumRight);
        
        if (diff < minDiff) {
            minDiff = diff;
            cutIndex = i;
        }
    }
    
    for (int i = 0; i <= cutIndex; ++i) {
        std::cout << nums[i] << std::endl;
    }
    std::cout << std::endl;
    for (int i = cutIndex + 1; i < n; ++i) {
        std::cout << nums[i] << std::endl;
    }
    
    return 0;
}