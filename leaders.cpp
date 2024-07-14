#include <vector>
#include <iostream>
#include <deque>

std::deque<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    std::deque<int> res;
    int maxRight = arr.back();  
    res.push_back(maxRight);     

    for (int i = n - 2; i >= 0; --i) {
        if (arr[i] >= maxRight) { 
            maxRight = arr[i];  
            res.push_front(arr[i]);   
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