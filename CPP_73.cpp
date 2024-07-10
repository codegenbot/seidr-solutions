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
    
    std::vector<int> dp;
    dp.reserve(m); // replace this line
    int smallest = INT_MAX;

    for (int length = 2; length <= n; length++) {
        for (int i = 0; i < n - length + 1; i++) {
                int j = i + length - 1;
                
                if (arr[i] == arr[j]) {
                    dp.push_back(dp.back());
                } else {
                    int min_left = (i < n-length) ? dp[length-2] : INT_MAX;
                    int min_right = (j > length-1) ? dp[length-2] : INT_MAX;
                    dp.push_back(1 + (arr[i] == arr[j]) ? dp.back() : std::min(min_left, min_right));
                }
            }

        if (dp.back() < smallest) {
            smallest = dp.back();
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