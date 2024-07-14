#include <vector>
#include <iostream>

std::vector<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> res;
    int maxRight = arr.back(); // Initialize max right with last element
    for (int i = n - 1; i >= 0; i--) { 
        if (arr[i] >= maxRight) {
            res.push_back(arr[i]);
            maxRight = arr[i]; // Update max right
        }
    }
    return res;
}

int main() {
    std::vector<int> testArr = {16, 17, 4, 3, 5, 2, 8, 9, 1, 3};
    auto leadersResult = leaders(testArr);
    for (auto leader : leadersResult) {
        std::cout << leader << " ";
    }
    return 0;
}