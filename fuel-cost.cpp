int fuelCost(vector<int>& vec) {
    int sum = 0;
    for (int num : vec) {
        int newNum = (num / 3);
        newNum = min(newNum, 0); // round down to nearest integer and subtract 2
        sum += newNum - 2;
    }
    return sum;
}