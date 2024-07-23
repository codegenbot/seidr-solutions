int calculateFuelCost(vector<int> fuelCosts) {
    int sum = 0;
    for (int cost : fuelCosts) {
        int newCost = static_cast<int>(cost / 3.0);
        if (newCost > 0) {
            newCost -= 2;
        }
        sum += newCost;
    }
    return sum;
}

int main() {
    int num;
    vector<int> fuelCosts;

    cin >> num;
    
    for(int i = 0; i < num; ++i)
    {
        cin >> num;
        fuelCosts.push_back(num);
    }

    cout << calculateFuelCost(fuelCosts) << endl;

    return 0;
}