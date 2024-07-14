#include <vector>
#include <iostream>

std::vector<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> res;
    
    for(int i=0; i<n; i++) {  
        bool isLeader = true;
        for(int j=i+1; j<n; j++) {
            if(arr[j] >= arr[i]) {
                isLeader = false;
                break;
            }
        }
        
        if(isLeader) res.push_back(arr[i]);
    }
    
    return res;
}

int main() {
    std::vector<int> arr = {16, 17, 4, 3, 5, 2, 8, 9, 1, 10};
    for(int i: leaders(arr)) {
        std::cout << i << " ";
    }
    return 0;
}