#include <vector>
int smallest_change(vector<int> arr) {
    int n = arr.size();
    vector<vector<bool>> dp(n, vector<bool>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (i == j)
                dp[i][j] = true;
            else
                dp[i][j] = arr[i] == arr[n - 1 - i];
        }
    }
    int ans = n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= n - i - 1; j++) {
            if (!dp[j][n - i - 1])
                ans = min(ans, 1 + (i > 0 ? smallest_change({arr[0], arr.begin() + 1, arr.end() - 1}) : 0));
        }
    }
    return ans;
}

int main() {
    vector<int> arr;
    int n;
    cout << "Enter the number of elements in the array: ";
    cin >> n;
    for (int i = 0; i < n; i++) {
        int x;
        cout << "Enter element " << i + 1 << ": ";
        cin >> x;
        arr.push_back(x);
    }
    cout << "The smallest change is: " << smallest_change(arr) << endl;
    return 0;
}