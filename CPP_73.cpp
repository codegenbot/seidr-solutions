#include <iostream>
#include <vector>

int smallest_change(vector<int> arr) {
    int n = arr.size();
    vector<vector<int>> dp(n, vector<int>(n));

    for (int i = 0; i < n; ++i)
        dp[i][i] = 0;
        
    for (int length = 2; length <= n; ++length) {
        for (int i = 0; i < n - length + 1; ++i) {
            int j = i + length - 1;
            
            if (arr[i] == arr[j])
                dp[i][j] = dp[i+1][j-1];
            else
                dp[i][j] = 1 + min({dp[i+1][j], dp[i][j-1]});
        }
    }
    
    return dp[0][n-1];
}

int main() {
    int n;
    std::cout << "Enter the size of the array: ";
    std::cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        std::cout << "Enter element at position " << i + 1 << ": ";
        std::cin >> arr[i];
    }

    int result = smallest_change(arr);

    std::cout << "Smallest change: " << result << std::endl;

    return 0;
}