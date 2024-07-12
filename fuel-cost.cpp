Here is the solution:

int calculateFuelCost(vector<int> numbers) {
    int totalFuel = 0;
    for (int number : numbers) {
        if (number >= 3) {
            int newNumber = (number / 3) - 2;
            totalFuel += newNumber;
        }
    }
    return totalFuel;
}