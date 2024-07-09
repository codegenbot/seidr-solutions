#include <iostream>
#include <vector>

bool can_arrange(std::vector<int> arr){
    for(int i = 1; i < arr.size(); i++){
        if(arr[i] <= arr[i-1])
            return false;
    }
    return true;
}

int main(){
    std::vector<int> arr = {5, 3, 7, 2};
    if(can_arrange(arr)){
        std::cout << "The array can be arranged in increasing order." << std::endl;
    } else {
        std::cout << "The array cannot be arranged in increasing order." << std::endl;
    }
    return 0;
}