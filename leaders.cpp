```cpp
#include <vector>

std::vector<int> leaders(std::vector<int>& arr) {
    int n = arr.size();
    std::vector<int> res;
    
    for(int i=n-1; i>=0; i--) {
        if(i == n-1 || arr[i] >= arr[i+1])
            res.push_back(arr[i]);
    }
    
    return res;
}

int main() {
    std::vector<int> input = {16, 17, 4, 3, 5, 2, 8, 9, 1, 3};
    std::vector<int> leadersVec = leaders(input);
    
    for (int i : leadersVec) {
        std::cout << i << " ";
    }
    return 0;
}