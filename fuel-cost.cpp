Here is the solution:

int fuelCost(vector<int> prices) {
    int sum = 0;
    for (auto price : prices) {
        int newPrice = floor((double)price / 3) - 2;
        sum += newPrice;
    }
    return sum;
}