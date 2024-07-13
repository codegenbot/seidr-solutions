int calculateFuelCost(vector<int> numbers) {
    int totalFuel = 0;
    for (int num : numbers) {
        int newNum = (num / 3) - 2;
        totalFuel += newNum;
    }
    return totalFuel;
}