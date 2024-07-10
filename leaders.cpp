```c++
#include <vector>
#include <iostream>

int main() {
    std::vector<int> arr = {16, 17, 4, 3, 5, 2};
    for(auto x: leaders(arr)) cout << x << " ";
    return 0;
}

std::vector<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> res;

    if(n == 1)
        return arr;

    int maxRightSoFar = arr.back();
    for(int i=n-2; i>=0; --i){
        if(arr[i] >= maxRightSoFar){
            res.push_back(arr[i]);
            maxRightSoFar = arr[i];
        }
    }

    return res;
}