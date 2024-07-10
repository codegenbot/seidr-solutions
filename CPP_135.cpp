#include <vector>

int can_arrange(std::vector<int> arr){
    int largestIndex = -1;
    for(int i = arr.size() - 2; i >= 0; i--){
        if(arr[i] > arr[i+1]){
            largestIndex = i;
            break;
        }
    }
    return largestIndex;
}