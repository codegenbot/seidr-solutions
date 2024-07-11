#include <vector>
#include <algorithm>

std::vector<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> result;

    for(int i=n-1; i>=0; i--) {
        bool isLeader = true;
        for(int j=i+1; j<n; j++) {
            if(arr[j] >= arr[i]) {
                isLeader = false;
                break;
            }
        }
        if(isLeader) result.push_back(arr[i]);
    }

    std::reverse(result.rbegin(), result.rend()); 
    return result;
}