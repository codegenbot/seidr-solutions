```c++
#include <iostream>
#include <vector>

std::vector<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> result;
    
    if(n == 0)
        return result;

    result.push_back(arr[n-1]);
    for(int i=n-2; i>=0; i--) {
        if(result.back() < arr[i]) {
            result.push_back(arr[i]);
        }
    }

    return result;
}

int main() {
    std::vector<int> arr = {1, 3, 4, 2};
    std::vector<int> result = leaders(arr);
    for (int num : result) {
        std::cout << num << " ";
    }
    return 0;
}