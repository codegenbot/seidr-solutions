#include <vector>
#include <iostream>

int can_arrange(std::vector<int> arr){
    for(int i=1; i<arr.size(); i++){
        if(arr[i] <= arr[i-1])
            return i;
    }
    return -1;
}

int main() {
    std::vector<int> arr = {5, 3, 4};
    int result = can_arrange(arr);
    if(result != -1) {
        std::cout << "The first pair of numbers that are out of order is at index " << result << "." << std::endl;
    } else {
        std::cout << "The array is already in order." << std::endl;
    }
    return 0;
}