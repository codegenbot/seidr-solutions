```cpp
#include <vector>

int main() {
    int arr[] = {1, 2, 7, 8, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    std::vector<int> leadersVec;
    for(int i = 0; i < n; ++i) {
        leadersVec.push_back(arr[i]);
    }
    std::vector<int> res = leaders(leadersVec); 
    for (int i : res) {
        std::cout << i << " ";
    }
    return 0;
}

std::vector<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> res;

    int maxR = arr.back();
    for(int i=n-1; i>=0; i--) {  
        if(arr[i] >= maxR) res.push_back(arr[i]);
        maxR = arr[i];
    }
    
    return res;
}