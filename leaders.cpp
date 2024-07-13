#include <vector>
#include <initializer_list>
#include <iostream>

std::vector<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> res;
    
    if(n == 0) return res;
    
    for(int i=n-1; i>=0; i--) {
        bool isLeader = true;
        for(int j=i+1; j<n; j++) {
            if(arr[i] <= arr[j]) {
                isLeader = false;
                break;
            }
        }
        if(isLeader) res.push_back(arr[i]);
    }
    
    return res;
}

int main() {
    std::vector<int> arr = {7};
    std::vector<int> result = leaders(arr);
    
    for (int i : result) {
        std::cout << i << " ";
    }
}