```cpp
#include <iostream>
#include <vector>
#include <climits>

int smallest_change(std::vector<int> arr) {
    int n = arr.size();
    int m = 1; // All rows will have the same size 'm'
    
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            m = i + 1;
            break;
        }
    }
    
    std::vector<int> dp(n);
    int smallest = INT_MAX;

    for (int length = 2; length <= n; length++) {
        for (int i = 0; i < n - length + 1; i++) {
                int j = i + length - 1;
                
                if (arr[i] == arr[j]) {
                    dp[length-1] = dp[length-2];
                } else {
                    int min_left = (i < n-length) ? dp[length-2] : INT_MAX;
                    int min_right = (j > length-1) ? dp[length-2] : INT_MAX;
                    dp[length-1] = 1 + (arr[i] == arr[j]) ? dp[length-2] : std::min(min_left, min_right);
                }
            }

        if (dp[m-1] < smallest) {
            smallest = dp[m-1];
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