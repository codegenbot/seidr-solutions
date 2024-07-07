#include <vector>

int can_arrange(std::vector<int> arr){
    int i = 1;
    while(i < arr.size()){
        if(arr[i] <= arr[i-1]){
            return i - 1;
        }
        i++;
    }
    return -1;
}