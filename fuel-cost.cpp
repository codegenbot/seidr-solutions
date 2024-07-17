int fuelCost(vector<int> vec) {
    int sum = 0;
    for (int i : vec) {
        int val = (i / 3);
        val = floor(val) - 2; 
        sum += val;
    }
    return sum;
}