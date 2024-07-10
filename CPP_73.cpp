```cpp
#include <iostream>
#include <vector>
#include <cassert>
#include <climits>

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    std::vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> arr[i];
    }

    int smallest = smallest_change(arr);

    if (smallest == INT_MAX) {
        std::cout << "No change is possible.\n";
    } else {
        std::cout << "Smallest number of coins needed: " << smallest << "\n";
    }
}

int smallest_change(std::vector<int> arr) {
    int n = arr.size();
    int m = 1; // All rows will have the same size 'm'
    
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            m = i + 1;
            break;
        }
    }
    
    std::vector<std::vector<int>> dp(n, std::vector<int>(m));
    
    for (int i = 0; i < n; i++) {
        dp[i][0] = arr[i];
    }
    
    for (int length = 2; length <= n; length++) {
        for (int i = 0; i < n - length + 1; i++) {
                int j = i + length - 1;
                
                if (arr[i] == arr[j]) {
                    dp[i][j-i+1] = dp[i + 1][j - i];
                } else {
                    int min_left = (i < n-1) ? dp[i+1][j - i] : INT_MAX;
                    int min_right = (j > 0) ? dp[i][j - i - 1] : INT_MAX;
                    dp[i][j-i+1] = 1 + (arr[i] == arr[j]) ? dp[i + 1][j - i] : std::min(min_left, min_right);
                }
            }
        }
    
    return dp[0][n-1];
}