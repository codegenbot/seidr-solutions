#include <vector>
#include <algorithm>

std::vector<int> maximum(std::vector<int> arr, int k) {
    std::vector<int> result = arr;
    for(int i=k; i>0; i--){
        if(result[i-1] > 0){
            result[i-1] = 0;
            break;
        }
        else{
            result[i-1] = 0;
        }
    }
    return result;
}