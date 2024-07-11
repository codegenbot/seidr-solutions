#include <vector>

int can_arrange(std::vector<int> arr) {
    int result = -1;
    for(int i=0; i<arr.size()-1; i++){
        if(arr[i] >= arr[i+1])
            return -1; // not possible to arrange
        else if(i > 0 && arr[i] <= arr[0])
            result = 0; // can be arranged starting from 0
        else if(result == -1)
            result = i + 1; // first one that is greater than previous
    }
    return result;
}