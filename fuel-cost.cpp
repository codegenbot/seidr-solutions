int calculateFuelCost(vector<int>& vec) {
    int sum = 0;
    for (int num : vec) {
        num /= 3; // divide each by 3
        num--; // round down to the nearest integer
        if (num > -2) { // subtract 2
            num--;
        }
        sum += num; // add up all new integers in the vector
    }
    return sum;
}