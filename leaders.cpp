#include <vector>
#include <iostream>

std::vector<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> res;
    
    for(int i=n-1; i>=0; i--) {
        bool isLeader = true;
        for(int j=i+1; j<n; j++) {
            if(arr[i] < arr[j])
                isLeader = false;
        }
        if(isLeader)
            res.push_back(arr[i]);
    }
    
    return res;
}

int main() {
    std::vector<int> input = {18, 48, 517, 190, 204, 169, 784, 446, 770, 327, 555, 908, 56, 410, 987, 629, 467, 142, 858};
    std::vector<int> leaders = leaders(input);
    for(int i: leaders)
        std::cout << i << " ";
    return 0;
}