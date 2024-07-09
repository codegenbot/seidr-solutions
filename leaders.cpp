#include <vector>
#include <iostream>

std::vector<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> res;
    
    for(int i=n-1; i>=0; i--) {
        if(res.empty() || arr[i] >= res.back())
            res.push_back(arr[i]);
    }
    
    reverse(res.begin(), res.end()); // Reverse the vector to get the actual leaders
    return res;
}

int main() {
    std::vector<int> arr = {16, 17, 4, 13, 20};
    std::vector<int> leadersVec = leaders(arr);
    for(int i : leadersVec) {
        std::cout << i << " ";
    }
    return 0;
}