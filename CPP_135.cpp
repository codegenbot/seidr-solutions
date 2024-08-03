```cpp
#include <iostream>
#include <vector>

int can_arrange(std::vector<int> arr){
    for(int i=1; i<arr.size(); i++){
        if(arr[i-1] <= arr[i]){
            return i-1;
        }
    }
    return -1;
}

int main() {
    std::vector<int> arr = {5, 3, 2, 7, 6};
    int result = can_arrange(arr);
    std::cout << "The first index where the array cannot be arranged is: " << result << std::endl;
    return 0;
}