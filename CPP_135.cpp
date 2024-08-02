#include <vector>

int can_arrange(vector<int> arr){
    for(int i=1; i<arr.size(); i++){
        if(arr[i-1] > arr[i]) return -1;
    }
    return 0;
}