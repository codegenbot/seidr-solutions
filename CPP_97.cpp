
Sure, here is a solution for the problem CPP/97:
```cpp
#include <iostream>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] > arr[i][j - 1]) {
                int sum = arr[i][j];
                for (int k = j + 1; k < m; k++) {
                    if (arr[i][k] >= arr[i][k - 1]) {
                        sum += arr[i][k];
                    } else {
                        break;
                    }
                }
                maxSum = max(maxSum, sum);
            }
        }
    }
    cout << maxSum << endl;
    return 0;
}
```