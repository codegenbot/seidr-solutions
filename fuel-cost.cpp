int calculateFuelCost(vector<int> &vector) {
    int sum = 0;
    for (int i : vector) {
        int temp = (i / 3);
        temp = floor(temp);
        sum += (temp - 2);
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for(int i=0; i<n; i++){
        cin >> vec[i];
    }
    cout << calculateFuelCost(vec) << endl;
    return 0;
}