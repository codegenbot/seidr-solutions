#include <vector>
#include <iostream>

std::vector<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> res;
    int max_right = arr.back(); 
    for (int i = n - 1; i >= 0; i--) { 
        if (arr[i] >= max_right) {
            res.push_back(arr[i]);
            max_right = arr[i]; 
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