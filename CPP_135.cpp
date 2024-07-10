#include <vector>
#include <algorithm>

void can_arrange(std::vector<int>& arr) {
    int largestIndex = -1;
    for(int i = arr.size() - 1; i >= 0; i--){
        if(arr[i] < arr[i-1]){
            largestIndex = i;
            break;
        }
    }
    if (largestIndex != -1) {
        std::swap(arr[largestIndex-1], arr[largestIndex]);
        std::reverse(arr.begin() + largestIndex, arr.end());
    }
}