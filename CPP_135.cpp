#include <vector>

int can_arrange(std::vector<int> arr){
    for(int i = arr.size()-1; i > 0; i--){
        if(arr[i] < arr[i-1]){
            return i-1;
        }
    }
    return -1;
}