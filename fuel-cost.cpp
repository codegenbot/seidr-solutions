namespace std {
int fuelCost(std::vector<int> vec) {
    int sum = 0;
    for (int i : vec) {
        double val = floor(double(i) / 3) - 2;
        sum += val;
    }
    return sum; 
}