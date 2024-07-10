```
#include <vector>
#include <iostream>

int main() {
    std::vector<int> arr = {16, 17, 4, 3, 5, 2};
    leaders(arr);
    return 0;
}

std::vector<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    if(n == 0) return {};

    std::vector<int> res;
    for(int i=n-1; i>=0; --i){
        bool isLeader = true;
        for(int j=i+1; j<n; ++j){
            if(arr[i] < arr[j]){
                isLeader = false;
                break;
            }
        }
        if(isLeader) res.push_back(arr[i]);
    }

    return res;
}