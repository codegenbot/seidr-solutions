int calculateFuelCost(vector<int> numbers) {
    int total = 0;
    for (int num : numbers) {
        int newNumber = (num / 3);
        if (newNumber < 1) newNumber = 0; // round down to nearest integer, so anything less than 1 is 0
        total += newNumber - 2;
    }
    return total;
}