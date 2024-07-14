int calculateFuelCost(vector<int>& vec) {
    int sum = 0;
    for (int i : vec) {
        int result = (i / 3);
        if(result < 1) result = 0; // round down to nearest integer, subtract 2
        else result -= 2;
        sum += result;
    }
    return sum;
}