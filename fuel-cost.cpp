int fuelCost(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int x = i / 3; // divide by 3
        x = floor(x); // round down to nearest integer
        x -= 2; // subtract 2
        sum += x; // add to the sum
    }
    return sum;
}