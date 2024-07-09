#include <vector>
#include <initializer_list>

std::vector<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> res;
    
    for(int i=n-1; i>=0; i--) {
        bool isLeader = true;
        for(int j=i+1; j<n; j++) {
            if(arr[j] >= arr[i]) {
                isLeader = false;
                break;
            }
        }
        if(isLeader) {
            res.push_back(arr[i]);
        }
    }
    
    return res;
}

int main() {
    std::vector<int> arr = {1, 3, 4, 2}; 
    std::vector<int> result = leaders(arr);
}