int calculateFuelCost(vector<int> numbers) {
    int total = 0;
    for (int num : numbers) {
        int result = (num / 3);
        if (result < 1) {
            result = 0;
        } else {
            result--;
        }
        total += result;
    }
    return total;
}

int main() {
    int n, num;
    cin >> n;
    vector<int> numbers(n);
    for(int i=0; i<n; i++) {
        cin >> num;
        numbers[i] = num;
    }
    cout << calculateFuelCost(numbers) << endl;
    return 0;
}