#include <algorithm>
#include <cmath>

int maximumAbsoluteDifference(vector<int> arr) {
    int maxDiff = 0;
    
    for(int i=0; i<arr.size()-1; i++) {
        int diff = abs(arr[i] - arr[i+1]);
        if(diff > maxDiff)
            maxDiff = diff;
    }
    
    return *max_element(arr.begin(), arr.end());
}