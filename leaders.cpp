#include <vector>
#include <iostream>

std::vector<int> leaders(const std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> result;

    for(int i=n-1; i>=0; i--) { 
        if(i == n-1 || arr[i] >= max_right(arr, i)) {
            result.push_back(arr[i]);
        }
    }

    return result;
}

int main() {
    std::vector<int> arr = {343, 601, 479, 668, 40, 131, 462, 753, 604, 579, 456, 243, 804, 336, 479, 600, 235};
    std::vector<int> result = leaders(arr);
    for(int i : result) {
        std::cout << i << " ";
    }
    return 0;
}

int max_right(const std::vector<int>& arr, int index) {
    int max = arr[index];
    for(int i=index+1; i<arr.size(); i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}