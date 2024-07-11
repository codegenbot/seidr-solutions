#include <iostream>
#include <vector>

std::vector<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> result;

    for(int i=n-1; i>=0; i--) {
        bool isLeader = true;
        for(int j=i+1; j<n; j++) {
            if(arr[j] >= arr[i]) {
                isLeader = false;
                break;
            }
        }
        if(isLeader) result.push_back(arr[i]);
    }

    return result;
}

int main() {
    std::vector<int> arr = {17, 28, 4};
    std::vector<int> result = leaders(arr);
    for (int num : result) {
        std::cout << num << " ";
    }
    return 0;
}