int main() {
    vector<int> vec;
    int n;
    while (cin >> n) {
        vec.push_back(n);
    }

    cout << calculateFuelCost(vec) << endl;

    return 0;
}