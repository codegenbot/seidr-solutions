int main() {
    vector<int> input;
    int num;
    
    while (cin >> num) {
        input.push_back(num);
    }

    int n = input.size();
    int sum = accumulate(input.begin(), input.end(), 0);

    vector<vector<int>> dp(n + 1, vector<int>((sum / 2) + 1));
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= sum / 2; j++) {
            dp[i][j] = dp[i - 1][j];
            if (j >= input[i - 1]) {
                dp[i][j] = max(dp[i][j], dp[i - 1][j - input[i - 1]] + input[i - 1]);
            }
        }
    }

    int diff = sum - 2 * dp[n][sum / 2];
    int first_half = dp[n][sum / 2];
    int second_half = sum - first_half;

    cout << first_half << endl;
    cout << second_half << endl;
    cout << diff << endl;

    return 0;
}