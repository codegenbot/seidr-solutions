#include <vector>
#include <algorithm>

std::vector<int> maximum(std::vector<int> arr, int k) {
    std::sort(arr.begin(), arr.end(), std::greater<int>());
    std::vector<int> result(arr.begin(), arr.begin() + k);
    return result;
}

bool issame(std::vector<int> arr1, std::vector<int> arr2) {
    if(arr1.size() != arr2.size()) {
        return false;
    }
    
    for(int i = 0; i < arr1.size(); i++) {
        if(arr1[i] != arr2[i]) {
            return false;
        }
    }
    
    return true;
}

int main() {
    std::vector<int> arr1 = {5, 2, 8, 9, 1};
    std::vector<int> result1 = maximum(arr1, 3);
    std::vector<int> expected1 = {9, 8, 5};
    
    if(issame(result1, expected1)) {
        std::cout << "Test case 1 passed" << std::endl;
    } else {
        std::cout << "Test case 1 failed" << std::endl;
    }
    
    std::vector<int> arr2 = {3, 1, 4, 1, 5, 9};
    std::vector<int> result2 = maximum(arr2, 4);
    std::vector<int> expected2 = {9, 5, 4, 3};
    
    if(issame(result2, expected2)) {
        std::cout << "Test case 2 passed" << std::endl;
    } else {
        std::cout << "Test case 2 failed" << std::endl;
    }
    
    return 0;
}