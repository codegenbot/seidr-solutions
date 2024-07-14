#include <vector>
#include <iostream>

std::vector<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> res;
    for (int i = 0; i < n; i++) { 
        if (arr[i] >= arr[i + 1]) {
            res.push_back(arr[i]);
        } else if (i == n - 1) { 
            res.push_back(arr[i]);
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