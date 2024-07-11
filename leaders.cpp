#include <vector>
#include <algorithm>

std::vector<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> result;
    
    for(int i=n-1; i>=0; i--) {
        bool isLeader = true;
        auto it = arr.begin() + (i+1);
        auto end = arr.end();
        if(find(it, end, arr[i]) == end) {
            result.push_back(arr[i]);
        }
    }

    return result;
}