int fuelCost(vector<int> vec) {
    int sum = 0;
    for(int i : vec) {
        int val = (i / 3);
        val = floor(val); // round down to nearest integer
        val -= 2;
        sum += val;
    }
    return sum;
}