#include <vector>
#include <algorithm>

std::vector<int> leaders(std::vector<int>& arr) {
    std::vector<int> result;
    int maxRight = arr.back();
    for(int i = arr.size() - 2; i >= 0; i--) {
        if(arr[i] >= maxRight)
            result.push_back(arr[i]);
        else 
            maxRight = arr[i];
    }
    result.push_back(arr.back());
    return result;
}