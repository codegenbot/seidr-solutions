int calculateFuelCost(vector<int>& prices) {
    int sum = 0;
    for (int price : prices) {
        int newPrice = floor((double)price / 3) - 2;
        sum += newPrice;
    }
    return sum;
}

int main() {
    vector<int> prices;
    int n;
    cin >> n;
    while(n--) {
        int temp; 
        cin >> temp;
        prices.push_back(temp);
    }
    
    cout << calculateFuelCost(prices) << endl;

    return 0;
}