Here is the solution:

int calculateFuelCost(vector<int> vec) {
    int sum = 0;
    for (int num : vec) {
        int newNum = (num / 3);
        newNum = std::floor(newNum) - 2;
        sum += newNum;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for(int i=0; i<n; i++) {
        cin >> vec[i];
    }
    
    cout << calculateFuelCost(vec) << endl;

    return 0;
}