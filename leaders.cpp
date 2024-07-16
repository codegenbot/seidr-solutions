```cpp
#include <vector>
#include <iostream>

std::vector<int> leaders(const std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> res;

    for(int i=n-1; i>=0; i--) {
        bool leader = true;
        for(int j=i+1; j<n; j++) {
            if(arr[j] >= arr[i]) {
                leader = false;
                break;
            }
        }
        if(leader) res.push_back(arr[i]);
    }

    return res;
}

int main() {
    std::vector<int> arr = {1, 3, 4, 2, 3}; 
    std::vector<int> leaders = leaders(arr);
    for (int i=0; i<leaders.size(); i++) cout << leaders[i] << " "; 
    return 0;
}