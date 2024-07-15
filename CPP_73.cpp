```cpp
#include <vector>
#include <iostream>

int smallest_change(std::vector<int> arr) {
    int n = arr.size();
    std::vector<std::vector<int>> dp(n, std::vector<int>(n));
    
    for (int i = 0; i < n; i++) {
        dp[i][i] = 0;
    }
    
    for (int length = 2; length <= n; length++) {
        for (int i = 0; i < n - length + 1; i++) {
            int j = i + length - 1;
            
            if (arr[i] == arr[j]) {
                dp[i][j] = dp[i + 1][j - 1];
            } else {
                dp[i][j] = 1 + std::min({dp[i + 1][j], dp[i][j - 1]});
            }
        }
    }
    
    return dp[0][n - 1];
}

int main() {
    int n;
    std::cout << "Enter the number of elements: ";
    std::cin >> n;
    std::vector<int> arr(n);
    std::cout << "Enter the array elements: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }
    
    int smallest = smallest_change(arr);
    
    if(smallest != 0) {
        std::cout << "Smallest number of changes required is: " << smallest;
    } else {
        std::cout << "No possible operations found.";
    }
    
    return 0;
}