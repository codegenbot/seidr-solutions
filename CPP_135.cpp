#include <vector>

size_t can_arrange(const std::vector<int>& arr){
    size_t index = -1;
    for(size_t i = 1; i < arr.size(); i++){
        if(arr[i] <= arr[i-1]){
            index = i - 1;
        }
    }
    return index;
}