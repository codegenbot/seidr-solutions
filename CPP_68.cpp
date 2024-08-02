```cpp
#include <iostream>
#include <vector>

std::vector<int> pluck(std::vector<int> arr) {
    std::vector<int> result;
    
    if(arr.empty()) {
        result.push_back(-1);
        return result;
    }

    int minEven = INT_MAX;
    int index = -1;

    for(int i=0; i<arr.size(); i++) {
        if(arr[i]%2==0 && arr[i] < minEven) {
            minEven = arr[i];
            index = i;
        }
    }

    result.push_back(minEven);
    result.push_back(index);

    return result;
}

int main() {
    std::vector<int> input = {7, 9, 7, 1};
    std::vector<int> output = pluck(input);
    
    if(output[0] == -1) {
        std::cout << "Array is empty." << std::endl;
    } else {
        std::cout << "Minimum even element: " << output[0] << ", Index: " << output[1] << std::endl;
    }
    
    return 0;
}