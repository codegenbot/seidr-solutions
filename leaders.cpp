#include <vector>
#include <iostream>

std::vector<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> res;

    for(int i=n-1; i>=0; i--) {
        if(res.empty() || arr[i] >= res.back()) {
            res.push_back(arr[i]);
        }
    }

    return res;
}

int main() {
    std::vector<int> arr = {7};
    auto res = leaders(arr);
    for (int x : res) {
        std::cout << x << " ";
    }
    return 0;
}