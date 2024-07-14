int fuelCost(vector<int>& prices) {
    int sum = 0;
    for (int price : prices) {
        int newPrice = (price / 3);
        newPrice = max(0, newPrice - 2); // round down to nearest integer and subtract 2
        sum += newPrice; 
    }
    return sum;
}