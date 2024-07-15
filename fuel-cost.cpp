int fuelCost(vector<int> vec) {
    int sum = 0;
    for (int i : vec) {
        sum += (i + 2) / 3 - 2; 
    }
    return sum;
}

int main() {
    vector<int> vec = {1, 2, 3};
    int result = fuelCost(vec);
    cout << "Result: " << result << endl;
    return 0;
}