int fuelCost(vector<int> vec) {
    int sum = 0;
    for (int i : vec) {
        double result = i/3.0; // Divide first
        result = floor(result); // Round down next
        result -= 2; 
        sum += static_cast<int>(result); // Convert to int and add
    }
    return sum;
}