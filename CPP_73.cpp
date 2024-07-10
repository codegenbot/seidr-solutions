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

    for (int length = 2; length <= n; length++) {
        for (int i = 0; i < n - length + 1; i++) {
                int j = i + length - 1;
                
                if (arr[i] == arr[j]) {
                    std::vector<int> dp(length);
                    dp[0] = 1;
                    for (int k = 1; k < length; k++) {
                        dp[k] = dp[k-1];
                    }
                } else {
                    int min_left = INT_MAX;
                    int min_right = INT_MAX;
                    if (i > 0) {
                        min_left = dp[length-2];
                    }
                    if (j < n-1) {
                        min_right = dp[length-2];
                    }
                    std::vector<int> dp(length);
                    dp[0] = 1 + (arr[i] == arr[j]) ? dp[0] : min_left;
                    for (int k = 1; k < length; k++) {
                        dp[k] = dp[k-1];
                    }
                }
            }

        if (dp[length-1] < smallest) {
            smallest = dp[length-1];
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