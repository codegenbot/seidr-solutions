#include <vector>

bool can_arrange(std::vector<int> arr){
    for(int i = arr.size() - 2; i >= 0; i--){
        if(arr[i] > arr[i+1]){
            return false;
        }
    }
    return true;
}