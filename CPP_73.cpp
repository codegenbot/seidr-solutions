#include <vector>
#include <string>

int smallest_change(vector<int> arr) {
    int n = arr.size();
    string str;
    for(int i=0; i<n; i++) {
        str += to_string(arr[i]);
    }
    
    int left = 0, right = n - 1;
    int count = 0;
    while(left < right) {
        if(str[left] != str[right]) {
            count++;
        }
        left++;
        right--;
    }
    return count;