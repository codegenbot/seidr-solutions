#include <vector>
#include <iostream>

std::vector<int> leaders(const std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> result;
    if(n == 0) return result;

    for(int i=0; i<n-1; i++) { 
        if(i == n-2 || arr[i] >= arr[i+1]) {
            result.push_back(arr[i]);
        }
    }

    result.push_back(arr[n-1]);

    return result;
}

int main() {
    std::vector<int> arr = {16, 17, 4, 3, 5, 2, 8, 9, 1, 3};
    std::vector<int> result = leaders(arr);
    for(int i : result) {
        std::cout << i << " ";
    }
    return 0;
}