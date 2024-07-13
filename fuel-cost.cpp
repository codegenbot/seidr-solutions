int calculateFuelCost(vector<int> numbers) {
    int sum = 0;
    for (int num : numbers) {
        int result = (num / 3);
        result = floor(result); // round down to nearest integer
        result -= 2; 
        sum += result;
    }
    return sum;
}