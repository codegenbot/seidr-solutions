#include <vector>

std::vector<int> leaders(const std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> result;

    if(n == 0) return result;

    for(int i=n-1; i>=0; i--) { 
        int max_right = 0;
        for(int j=i; j<n; j++) {
            if(arr[j] > max_right) {
                max_right = arr[j];
            }
        }
        if(max_right >= arr[i]) {
            result.push_back(arr[i]);
        }
    }

    return result;
}