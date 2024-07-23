int fuelCost(std::vector<int> v) {
    int sum = 0;
    for (int i : v) {
        while(i >= 3) {
            i /= 3;
            i--;
        }
        sum += i;
    }
    return sum;
}