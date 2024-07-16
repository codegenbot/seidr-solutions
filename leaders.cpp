#include <vector>
#include <iostream>

std::vector<int> leaders(const std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> result;

    if(n == 0) return result;

    int max_right = arr[n-1];
    result.push_back(max_right);

    for(int i=n-2; i>=0; i--) { 
        if(arr[i] >= max_right) {
            result.push_front(arr[i]);
            max_right = arr[i];
        }
    }

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