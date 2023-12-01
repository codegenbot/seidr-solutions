#include <iostream>
#include <vector>

int can_arrange(std::vector<int> arr){
    int largestIndex = -1;
    for(int i = 1; i < arr.size(); i++){
        if(arr[i] < arr[i-1]){
            largestIndex = i-1;
        }
    }
    return largestIndex;
}

int main() {
    std::vector<int> arr = {1, 2, 3, 5, 4};
    int result = can_arrange(arr);
    std::cout << "The largest index where the array is not arranged in ascending order is: " << result << std::endl;
    return 0;
}