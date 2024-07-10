Here is the solution:

int calculateFuelCost(vector<int>& costs) {
    int total = 0;
    for (int cost : costs) {
        int newCost = (cost / 3);
        if(newCost < 1)
            newCost = 0;
        else
            newCost -= 2;
        total += newCost;
    }
    return total;
}

int main() {
    vector<int> costs;
    int cost;
    while(cin >> cost) {
        costs.push_back(cost);
    }
    cout << calculateFuelCost(costs) << endl;
    return 0;
}