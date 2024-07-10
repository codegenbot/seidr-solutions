```c++
#include <iostream>
#include <vector>

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

int main() {
    std::vector<int> arr = {12, 10, 8, 6, 4};
    std::vector<int> leadersResult = leaders(arr);
    for(int i : leadersResult) {
        std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
}