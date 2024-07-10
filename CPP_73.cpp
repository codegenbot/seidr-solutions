#include <vector>
#include <string>
#include <algorithm>

int smallest_change(vector<int> arr) {
    int n = arr.size();
    string str;
    for(int i=0; i<n; i++) {
        str += to_string(arr[i]);
    }
    
    sort(str.begin(), str.end());
    
    int left = 0, right = str.size() - 1;
    int count = 0;
    while(left < right) {
        if(str[left] != str[right]) {
            count++;
        }
        left++;
        right--;
    }
    return count;
}