#include <vector>
#include <algorithm>

std::vector<int> maximum(std::vector<int> arr, int k) {
    std::sort(arr.begin(), arr.end(), std::greater<int>());
    std::vector<int> result(arr.begin(), arr.begin() + k);
    return result;
}

bool issame(std::vector<int> arr1, std::vector<int> arr2) {
    if (arr1.size() != arr2.size()) {
        return false;
    }
    for (int i = 0; i < arr1.size(); i++) {
        if (arr1[i] != arr2[i]) {
            return false;
        }
    }
    return true;
}

int main() {
    std::vector<int> arr1 = {1, 2, 3, 4, 5};
    std::vector<int> arr2 = {5, 4, 3, 2, 1};
    std::vector<int> result = maximum(arr1, 3);
    
    if (issame(result, arr2)) {
        std::cout << "Test case passed!" << std::endl;
    } else {
        std::cout << "Test case failed!" << std::endl;
    }
    
    return 0;
}