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
    
    std::vector<int> dp(n - m + 2); // Declare dp before using it
    dp[0] = 0; 

    for (int length = 1; length <= n; length++) {
        for (int i = 0; i < n - length + 1; i++) {
                int j = i + length - 1;
                
                if (arr[i] == arr[j]) {
                    dp[length] = dp[length-1];
                } else {
                    int min_left = (i < n-length) ? dp[length-1] : INT_MAX;
                    int min_right = (j > length-1) ? dp[length-1] : INT_MAX;
                    dp[length] = 1 + (arr[i] == arr[j]) ? dp[length-1] : std::min(min_left, min_right);
                }
            }

        if (dp[m-1] < INT_MAX) {
            return dp[m-1];
        } else {
            return INT_MAX;
        }
    }
    
    return INT_MAX;
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