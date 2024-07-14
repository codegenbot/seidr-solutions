int solve(vector<int> v) {
    int sum = 0;
    for (int num : v) {
        if (num < 3) {
            sum += 0;
        } else {
            sum += floor((num-2)/3);
        }
    }
    return sum;
}

int main() {
    vector<int> input;
    int n;
    cin >> n;
    for(int i = 0; i < n; ++i) {
        int val;
        cin >> val;
        input.push_back(val);
    }
    cout << solve(input) << endl;
    return 0;
}