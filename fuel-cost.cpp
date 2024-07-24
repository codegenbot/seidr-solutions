int fuelCost(vector<int> arr) {
    int sum = 0;
    for (int i = 0; i < arr.size(); i++) {
        sum += (arr[i] / 3) - 2;
    }
    return sum;
}
int main() {
    vector<int> arr;
    int n;
    while (cin >> n) {
        arr.push_back(n);
    }
    cout << fuelCost(arr) << endl;
    return 0;
}