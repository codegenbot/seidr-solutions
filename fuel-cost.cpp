int getFuelCost(vector<int> prices) {
    int totalFuel = 0;
    for(int price : prices) {
        totalFuel += (price / 3 - 2);
    }
    return totalFuel;
}