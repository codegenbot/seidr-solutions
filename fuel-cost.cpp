Here is the solution:

int calculateFuelCost(vector<int> prices) {
    int total = 0;
    for (int price : prices) {
        int result = floor((double)price / 3) - 2;
        if (result >= 0) {
            total += result;
        }
    }
    return total;
}