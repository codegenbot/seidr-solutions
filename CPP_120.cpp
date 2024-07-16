#include <algorithm>
#include <vector>
#include <cassert>

std::vector<int> maximum(std::vector<int> arr, int k){
    std::sort(arr.begin(), arr.end());
    std::vector<int> result;
    for(int i = arr.size() - k; i < arr.size(); i++){
        result.push_back(arr[i]);
    }
    return result;
}