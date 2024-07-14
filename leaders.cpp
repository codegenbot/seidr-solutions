#include <vector>
#include <iostream>

std::vector<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> res;

    for(int i=n-1; i>=0; i--) {  
        bool isLeader = true;
        for(int j=n-1; j>i; j--) {  
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
    std::vector<int> input = {12, 10, 8, 6, 4};
    std::vector<int> output = leaders(input);
    for (int i : output) {
        std::cout << i << " ";
    }
    return 0;
}