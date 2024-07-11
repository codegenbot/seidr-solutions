```
#include <iostream>
#include <vector>

int main() {
    std::vector<int> arr = {16, 17, 4, 3, 5, 2};
    std::vector<int> result = leaders(arr);
    for(int i : result)
        std::cout << i << " ";
    return 0;
}

std::vector<int> leaders(std::vector<int>& arr) {
    std::vector<int> result;
    int maxRight = arr.back();
    for(int i = arr.size() - 1; i >= 0; i--) {
        if(arr[i] >= maxRight)
            result.push_back(arr[i]);
        else 
            maxRight = arr[i];
    }
    std::reverse(result.begin(), result.end());
    return result;
}