#include <vector>
#include <iostream>

std::vector<int> leaders(const std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> result;

    for(int i=n-1; i>=0; i--) {
        bool leader = true;
        for(int j=i+1; j<n; j++) {
            if(arr[j] >= arr[i]) {
                leader = false;
                break;
            }
        }
        if(leader) result.push_back(arr[i]);
    }

    return result;
}

int main() {
    std::vector<int> arr = std::vector<int>({1, 3, 4, 2, 3}); 
    std::vector<int> result = leaders(arr);
    for (int i=0; i<result.size(); i++) std::cout << result[i] << " "; 
    return 0;
}