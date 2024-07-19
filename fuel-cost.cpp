Here is the solution:

int fuelCost(vector<int> vec) {
    int sum = 0;
    for (int i : vec) {
        int val = i / 3 - 2; // Divide by 3 and subtract 2
        sum += val; // Add to the total sum
    }
    return sum;
}