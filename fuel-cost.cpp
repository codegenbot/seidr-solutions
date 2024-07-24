Here is the solution:

int solve(vector<int> &v) {
    int sum = 0;
    for (int i : v) {
        int val = (i / 3) - 2;
        sum += val;
    }
    return sum;
}

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int &x : v) {
        cin >> x;
    }
    cout << solve(v) << endl;
    return 0;
}