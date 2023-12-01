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
    std::vector<int> arr = {1, 2, 3, 4, 5};
    std::cout << can_arrange(arr) << std::endl;

    arr = {5, 4, 3, 2, 1};
    std::cout << can_arrange(arr) << std::endl;

    arr = {1, 3, 2, 4, 5};
    std::cout << can_arrange(arr) << std::endl;

    return 0;
}