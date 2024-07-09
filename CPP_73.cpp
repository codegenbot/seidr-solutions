#include <stdio.h>
#include <vector>
using namespace std;

int smallest_change(vector<int> arr) {
    int n = arr.size();
    int left = 0;
    int right = n - 1;
    int changes = 0;
    
    while (left <= right) {
        if (arr[left] != arr[right]) {
            if (arr[left + 1] == arr[right]) {
                left++;
            } else if (arr[left] == arr[right - 1]) {
                right--;
            } else {
                changes++;
                break;
            }
        } else {
            left++;
            right--;
        }
    }
    
    return changes;
}