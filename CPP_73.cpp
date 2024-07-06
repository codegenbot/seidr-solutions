#include <iostream>
#include <vector>

int smallest_change(std::vector<int> arr) {
    int n = arr.size();
    std::vector<std::vector<int>> dp(n, std::vector<int>(n, 0));
    
    for (int i = 0; i < n; i++) {
        for (int j = i; j >= 0; j--) {
            if (i == j)
                dp[i][j] = arr[i];
            else
                dp[j][i] = std::abs(arr[i] - arr[j]) + (dp[(j+1)][(i-1)] > 0 ? 1 : dp[(j+1)][(i-1)]);
        }
    }
    
    return dp[0][n-1];
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        std::cout << "Enter element " << i+1 << ": ";
        std::cin >> arr[i];
    }

    int res = smallest_change(arr);
    std::cout << "Smallest change is: " << res << std::endl;

    return 0;
}