#include <vector>

int smallest_change(vector<int> arr) {
    int n = arr.size();
    int left = 0, right = n - 1;
    int changes = 0;

    while (left < right) {
        if (arr[left] != arr[right]) {
            changes++;
            int maxLeft = arr[left], minRight = arr[right];
            for (int i = left + 1; i <= right; i++) {
                if (arr[i] > maxLeft) maxLeft = arr[i];
                if (arr[i] < minRight) minRight = arr[i];
            }
            if (maxLeft == minRight) changes++;
            else {
                int mid = (left + right) / 2;
                if (mid >= left && arr[mid] <= maxLeft) {
                    right = mid;
                } else if (mid < right && arr[mid] >= minRight) {
                    left = mid + 1;
                } else {
                    left++;
                    right--;
                }
            }
        } else {
            left++;
            right--;
        }
    }

    return changes;
}