int fuelCost(vector<int> vec) {
    int sum = 0;
    for (int x : vec) {
        int y = (x / 3);
        y = std::floor(y); // round down to nearest integer
        y -= 2; 
        sum += y;
    }
    return sum;
}