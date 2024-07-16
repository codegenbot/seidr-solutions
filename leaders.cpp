#include <vector>
#include <iostream>

std::vector<int> leaders(const std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> result;
    int maxRight = arr[n-1]; // Initialize the maximum right element as the last element of the array

    for(int i=n-2; i>=0; i--) { 
        if(arr[i] >= maxRight) {
            result.push_back(arr[i]);
            maxRight = arr[i];
        }
    }

    return result;
}

std::vector<int> leaders(const std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> result;
    int maxRight = arr[n-1]; // Initialize the maximum right element as the last element of the array

    for(int i=n-2; i>=0; i--) { 
        if(arr[i] >= maxRight) {
            result.push_back(arr[i]);
            maxRight = arr[i];
        }
    }

    return result;
}

int main() {
    std::vector<int> testArray = {16, 17, 4, 3, 5, 2, 3, 7, 1, 6};
    for (int leader : leaders(testArray)) {
        std::cout << leader << " ";
    }
    return 0;
}