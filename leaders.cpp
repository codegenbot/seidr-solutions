#include <vector>

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
        
        if(isLeader) res.push_back(arr[i]);
    }
    
    return res;
}

int main() {
    std::vector<int> arr = {16, 17, 4, 3, 5, 2};
    std::vector<int> leadersResult = leaders(arr);
    for (int leader : leadersResult) {
        std::cout << leader << " ";
    }
    return 0;
}