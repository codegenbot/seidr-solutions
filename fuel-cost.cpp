int calculateFuelCost(vector<int> v) {
    int total = 0;
    for (int i : v) {
        int result = (i / 3);
        if(result < 1) {
            result = 0;
        } else {
            result = floor(result) - 2;
        }
        total += result;
    }
    return total;
}