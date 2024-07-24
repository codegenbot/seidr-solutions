Here is the solution:

int calculateFuelCost(vector<int> numbers) {
    int total = 0;
    for (int num : numbers) {
        int newNum = static_cast<int>(num / 3.0);
        newNum = max(newNum - 2, 0); // round down and subtract 2
        total += newNum;
    }
    return total;
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