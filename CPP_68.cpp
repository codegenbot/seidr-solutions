```cpp
#include <vector>
#include <limits>

std::vector<int> pluck(std::vector<int> arr) {
    std::vector<int> result;
    if(arr.empty()) return {};
    int smallest_even = std::numeric_limits<int>::max();
    int index = -1;
    for(int i = 0; i < arr.size(); i++) {
        if(arr[i] % 2 == 0 && arr[i] < smallest_even) {
            smallest_even = arr[i];
            index = i;
        }
    }
    result.push_back(smallest_even);
    result.push_back(index);
    return result;
}