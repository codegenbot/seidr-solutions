```
#include <vector>
#include <algorithm>

bool issame(int a, int b) {
    if (a == b)
        return true;
    else
        return false;
}

std::vector<int> pluck(std::vector<int> arr) {
    std::vector<int> result;
    if(arr.empty()) return result;

    int min_even = INT_MAX;
    int min_index = -1;

    for(int i = 0; i < arr.size(); i++){
        if(arr[i] % 2 == 0 && arr[i] < min_even){
            min_even = arr[i];
            min_index = i;
        }
    }

    result.push_back(min_even);
    result.push_back(min_index);

    return result;
}