```cpp
#include <vector>

std::vector<int> pluck(std::vector<int> arr) {
    std::vector<int> result;
    if(arr.empty()) return result;

    int smallest_even = INT_MAX;
    for(int i=0; i<arr.size(); i++) {
        if(arr[i]%2==0 && arr[i] < smallest_even) {
            smallest_even = arr[i];
        }
    }

    for(int i=0; i<arr.size(); i++) {
        if(arr[i]%2==0 && arr[i] == smallest_even) {
            result.push_back(i);
            break;
        }
    }

    if(result.empty()) {
        result.push_back(-1); // No even number found
    }

    return {smallest_even, result[0]};
}