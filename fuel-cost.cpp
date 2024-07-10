int fuelCost(vector<int>& vec) {
    int sum = 0;
    for (int num : vec) {
        int temp = (num / 3);
        temp = floor(temp); // round down to nearest integer
        temp -= 2; // subtract 2
        sum += temp; // add the new integer to the sum
    }
    return sum;
}