Here is the solution:

int fuelCost(vector<int> v) {
    int total = 0;
    for (int x : v) {
        int y = (x / 3);
        y = (y > 0)? y - 2: 0;
        total += y;
    }
    return total;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for(int i=0; i<n; i++){
        cin >> v[i];
    }
    cout << fuelCost(v) << endl;
    return 0;
}