Here is the completed code:

```cpp
#include <vector>
#include <algorithm>

int smallest_change(const vector<int>& arr) {
    int n = arr.size();
    string str;
    for (int i : arr) {
        str += to_string(i);
    }
    
    int changes = 0;
    int left = 0, right = n - 1;
    while (left < right) {
        if (str[left] != str[right]) {
            changes++;
            break;
        }
        left++;
        right--;
    }

    if (left == right) {
        return 0;
    } else if (str[left] != str[right]) {
        int mid = n / 2;
        for (int i = 0; i < mid; i++) {
            if (arr[i] != arr[n - i - 1]) {
                changes++;
            }
        }
        return changes;
    } else {
        int mid = n / 2;
        int leftChanges = 0, rightChanges = 0;
        for (int i = 0; i < mid; i++) {
            if (arr[i] != arr[n - i - 1]) {
                leftChanges++;
                rightChanges++;
            } else if (i == n / 2) {
                break;
            }
        }
        return std::min(leftChanges, rightChanges);
    }
}