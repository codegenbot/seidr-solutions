```cpp
#include <iostream>
#include <vector>

int can_arrange(std::vector<int> arr) {
    for(int i=1; i<arr.size(); i++){
        if(arr[i-1] <= arr[i]){
            return i-1;
        }
    }
    return -1;
}

int main() {
    // Your code here
    return 0;
}