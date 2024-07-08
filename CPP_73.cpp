```cpp
#include <vector>
#include <iostream>

int smallest_change(std::vector<int> arr) {
    int n = arr.size();
    std::vector<std::vector<int>> dp(n, std::vector<int>(n));
    
    for(int i = 0; i < n; i++){
        dp[i][i] = 0;
    }
    
    for(int len = 2; len <= n; len++){
        for(int i = 0; i <= n - len; i++){
            int j = i + len - 1;
            
            if(arr[i] == arr[j]){
                dp[i][j] = dp[i+1][j-1];
            }else{
                dp[i][j] = 1 + min(dp[i+1][j], dp[i][j-1]);
            }
        }
    }
    
    return dp[0][n-1];
}

int main() {
    std::vector<int> arr;
    int n;
    std::cout << "Enter the number of elements in array: ";
    std::cin >> n;
    arr.resize(n);
    for(int i = 0; i < n; i++) {
        std::cout << "Enter element " << i + 1 << ": ";
        std::cin >> arr[i];
    }
    int minChanges = smallest_change(arr);
    if(minChanges != 0) {
        std::cout << "Minimum number of changes required: " << minChanges << std::endl;
    } else {
        std::cout << "Array is already sorted." << std::endl;
    }
    return 0;
}