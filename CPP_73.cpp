```cpp
#include <iostream>
#include <vector>
#include <climits>

int smallest_change(std::vector<int> arr) {
    int n = arr.size();
    int m = 1; 
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            m = i + 1;
            break;
        }
    }
    
    int smallest = INT_MAX;

    int dp[1] = {0};  
    for (auto coin : arr) {
        dp[0] = coin;
    }
    for (int length = 2; length <= n; length++) {
        for (int i = 0; i < n - length + 1; i++) {
                int j = i + length - 1;
                
                if (arr[i] == arr[j]) {
                    dp[0] = dp[0];
                } else {
                    int min_left = (i < n-length) ? dp[0] : INT_MAX;
                    int min_right = (j > length-1) ? dp[0] : INT_MAX;
                    dp[0] =  1 + (arr[i] == arr[j]) ? dp[0] : std::min(min_left, min_right);
                }
            }

        if (dp[0] < smallest) {
            smallest = dp[0];
        }
    }
    
    return smallest;
}

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