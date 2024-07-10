```c++
#include <vector>
#include <iostream>

int main() {
    std::vector<int> arr = {16, 17, 4, 3, 5, 2};
    leaders(arr);
    return 0;
}

std::vector<int> leaders(std::vector<int>& arr) {
    std::vector<int> res;
    int n = arr.size();
    if(n == 0) return res;

    for(int i=n-1; i>=0; --i){
        res.push_back(arr[i]);
    }

    return res;
}