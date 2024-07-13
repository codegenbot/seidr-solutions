int calculateFuelCost(vector<int> numbers) {
    int totalFuel = 0;
    for (int num : numbers) {
        int newNum = (num / 3);
        if (newNum < 1) {
            newNum = 0;
        } else {
            newNum -= 2;
        }
        totalFuel += newNum;
    }
    return totalFuel;
}