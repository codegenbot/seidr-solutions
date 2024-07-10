```c++
#include <vector>
#include <iostream>

int main() {
    std::vector<int> arr = {7,5,3,4,2}; // Initialize with input values
    std::vector<int> leaders_result = leaders(arr);
    
    for (auto leader : leaders_result) {
        std::cout << leader << " ";
    }
    return 0;
}

std::vector<int> leaders(std::vector<int>& arr) {
    std::vector<int> res;
    int n = arr.size();
    if(n == 0) return res;

    int rightmost_leader = arr[n-1];
    for(int i=n-2; i>=0; --i){
        if(arr[i] >= rightmost_leader) rightmost_leader = arr[i];
        else res.push_back(rightmost_leader);
    }

    res.push_back(rightmost_leader);

    return res;
}