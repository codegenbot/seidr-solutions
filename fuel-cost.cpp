int calculateFuelCost(vector<int> prices) {
    int totalFuel = 0;
    for (int price : prices) {
        int fuel = (price / 3 - 2);
        if (fuel > 0)
            totalFuel += fuel;
    }
    return totalFuel;
}