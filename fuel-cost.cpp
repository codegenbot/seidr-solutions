int calculateFuelCost(vector<int>& vec) {
    int sum = 0;
    for (int num : vec) {
        int result = (num / 3); // Divide by 3
        result = std::floor(result); // Round down to nearest integer
        result -= 2; // Subtract 2
        sum += result; // Add to the sum
    }
    return sum;
}