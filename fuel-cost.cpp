int calculateFuelCost(vector<int> &prices) {
    int totalCost = 0;
    for (int price : prices) {
        int newPrice = static_cast<int>(price / 3.0); // Divide by 3 and round down
        newPrice -= 2;                               // Subtract 2
        totalCost += newPrice;                       // Add to the total cost
    }
    return totalCost;
}