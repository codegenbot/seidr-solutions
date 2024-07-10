#include <stdio.h>
#include <vector>
using namespace std;

int smallest_change(vector<int> arr) {
    int n = arr.size();
    int left = 0, right = n - 1;
    int changes = 0;
    
    while (left <= right) {
        if (arr[left] == arr[right]) {
            left++;
            right--;
        } else {
            changes++;
            break;
        }
    }
    
    for (int i = left; i < right; i++) {
        if (arr[i] != arr[n - 1 - i]) {
            changes += 2;
        }
    }
    
    return changes;
}