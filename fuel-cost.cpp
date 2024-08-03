int fuelCost(vector<int> nums) {
    int sum = 0;
    for (int num : nums) {
        if (num < 3) continue; // Skip if number is less than 3
        int divided = num / 3; 
        sum += divided - 2;
    }
    return sum;
}