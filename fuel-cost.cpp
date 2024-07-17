int fuelCost(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int temp = (i / 3);
        temp = floor(temp); // round down to nearest integer
        sum += temp - 2; 
    }
    return sum;
}