int fuelCost(vector<int> vec) {
    int sum = 0;
    for (int i : vec) {
        i /= 3; // divide by 3
        i = floor(i); // round down to nearest integer
        i -= 2; // subtract 2
        sum += i; // add to the sum
    }
    return sum;
}