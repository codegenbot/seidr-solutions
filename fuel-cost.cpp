int getFuelCost(vector<int> fuelCosts) {
    int sum = 0;
    for (int i : fuelCosts) {
        int result = (i / 3) - 2;
        sum += result;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> costs(n);
    for(int i = 0; i < n; ++i){
        cin >> costs[i];
    }
    
    cout << getFuelCost(costs) << endl;
    return 0;
}