Here is the solution:

int calculateFuelCost(vector<int> numbers) {
    int totalFuelCost = 0;
    for (int number : numbers) {
        int fuelCost = (number / 3 - 2);
        if (fuelCost > 0)
            totalFuelCost += fuelCost;
    }
    return totalFuelCost;
}

int main() {
    int n;
    cin >> n;
    vector<int> numbers(n);
    for (int i = 0; i < n; ++i) {
        cin >> numbers[i];
    }
    cout << calculateFuelCost(numbers) << endl;
    return 0;
}