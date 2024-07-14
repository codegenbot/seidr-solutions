#include <vector>
#include <iostream>

std::vector<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> res;
    int maxRight = arr.back(); // initialize maxRight with the last element
    res.push_back(maxRight); // always add the rightmost element as a leader

    for (int i = n - 2; i >= 0; i--) { 
        if (arr[i] >= maxRight) {
            maxRight = arr[i]; // update maxRight
            res.push_back(arr[i]); // and add it to the result
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