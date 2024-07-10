int fuelCost(vector<int> v) {
    int sum = 0;
    for (int i : v) {
        int res = (i / 3);
        res = floor(res); // round down to nearest integer
        res -= 2; 
        sum += res; 
    }
    return sum;
}